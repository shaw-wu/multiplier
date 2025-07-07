`timescale 1ns / 1ps
module mul #(
	parameter DATA_BITS = 33
)(
	input									clk					,
	input  								asyn_rst	  ,
  input             		en          ,
	input  								syn_rst	 		,
	input [DATA_BITS-1:0] multiplicand,
	input [DATA_BITS-1:0] multiplier	,

	output reg						 outvalid		,
	output [DATA_BITS-1:0] result_hi	,
	output [DATA_BITS-1:0] result_lo
);

localparam DDATA_BITS = DATA_BITS * 2;
localparam LOGDATA_BITS = clog2(DATA_BITS);
localparam COUNT_BITS = LOGDATA_BITS;
localparam MAX_COUNT  = (1 << (COUNT_BITS - 1)) + 1;

reg [DDATA_BITS-1:0] mula;
reg [ DATA_BITS-1:0] mulb;
reg [DDATA_BITS-1:0] mulresult;
reg	[COUNT_BITS-1:0] counter; 
reg	sign_b;
wire [DDATA_BITS-1:0] init_mula;
wire [ DATA_BITS-1:0] init_mulb;
wire [DDATA_BITS-1:0] add_mula;
wire [DDATA_BITS-1:0] neg_mula;

assign result_hi = mulresult[DDATA_BITS-1:DATA_BITS];
assign result_lo = mulresult[DATA_BITS -1:0	 ];
assign neg_mula	 = ~mula + 1;
assign init_mula = {{DATA_BITS{multiplicand[DATA_BITS-1]}}, multiplicand		}  ;
assign init_mulb = multiplier;
assign add_mula  = !mulb[0]												 ? 0        : 
										counter == MAX_COUNT && sign_b ? neg_mula	: mula;


always @(posedge clk or negedge asyn_rst) begin
	if(asyn_rst) begin
		mulresult <= {DDATA_BITS{1'b0}};
		counter 	<= {COUNT_BITS{1'b0}};
		outvalid  <= 0;
	end else begin
		if(syn_rst) begin
		  mulresult <= {DDATA_BITS{1'b0}};
		  counter 	<= {COUNT_BITS{1'b0}};
			outvalid  <= 0;
		end else begin
			outvalid <= counter == MAX_COUNT;
			if(en) begin
				if(counter == MAX_COUNT) counter <= 0;
				else										 counter <= counter + 1;
				if(counter == 0) begin
					mulresult <= {DDATA_BITS{1'b0}};
					sign_b <= multiplier[DATA_BITS-1];
					mula <= init_mula;
					mulb <= init_mulb;
				end else begin
					mulresult <= add_mula + mulresult;
					mula <= mula << 1;
					mulb <= mulb >> 1;
				end
			end
		end
	end
end

function integer clog2;
	input integer value;
	integer i;
	begin
		clog2 = 0;
		for(i = value - 1; i > 0; i = i >> 1)
			clog2 = clog2 + 1;
	end
endfunction

endmodule
