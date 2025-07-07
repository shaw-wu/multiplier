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

wire [DDATA_BITS-1:0] S;
wire [DDATA_BITS-1:0] nS;
assign  S = {multiplicand, {DATA_BITS{1'b0}}};
assign nS = ~S + 1;

reg [DDATA_BITS-1:0] P;
reg [DATA_BITS   :0] B;
reg	[COUNT_BITS-1:0] counter; 
/*verilator lint_off PINCONNECTEMPTY*/
//66bits ALU
wire [DDATA_BITS-1:0] adds;
wire [DDATA_BITS-1:0] sum;
assign adds = ( B[0] && !B[1]) ?  S :
							(!B[0] &&  B[1]) ? nS : 0;
CLA alu(
	 .a		(P    ),
	 .b	 	(adds ),
	 .cin	(1'b0 ),
	 .sum	(sum  ),
	 .cout()
);

always @(posedge clk or negedge asyn_rst) begin
	if(asyn_rst) begin
		P					<= { DDATA_BITS  {1'b0}}; 
		B					<= {(DATA_BITS+1){1'b0}}; 
		counter 	<= { COUNT_BITS  {1'b0}};
		outvalid  <= 0;
	end else begin
		if(syn_rst) begin
			P					<= { DDATA_BITS  {1'b0}}; 
			B					<= {(DATA_BITS+1){1'b0}}; 
			counter 	<= { COUNT_BITS  {1'b0}};
			outvalid  <= 0;
		end else begin
			outvalid <= counter == MAX_COUNT;
			if(en) begin
				if(counter == MAX_COUNT) counter <= 0;
				else										 counter <= counter + 1;
				if(counter == 0) begin
					P <= {DDATA_BITS{1'b0}};
					B <= {multiplier, 1'b0};
				end else begin
					P <= sum >>> 1;
					B <= B >> 1;
				end
			end
		end
	end
end

assign result_hi = P[DDATA_BITS-1:DATA_BITS];
assign result_lo = P[DATA_BITS -1:0	 ];

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
