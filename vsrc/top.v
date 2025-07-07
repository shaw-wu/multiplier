`timescale 1ns / 1ps
module top #(
	parameter XLEN = 32
)(
	input							clk					,
	input  						rst					,

  output            inready			,
  input             invalid			,

	input							flush				,
	input	 [1:0]		  mul_signed  ,
	input  [XLEN-1:0] multiplicand,
	input  [XLEN-1:0] multiplier	,

	output reg			  outvalid		,
	output [XLEN-1:0] result_hi		,
	output [XLEN-1:0] result_lo
);

wire ovalid;
wire [XLEN:0] mula; 
wire [XLEN:0] mulb; 
wire signed_a;
wire signed_b;

assign signed_a = mul_signed[1] ? multiplicand[XLEN-1] : 1'b0;
assign signed_b = mul_signed[0] ? multiplier[XLEN-1]   : 1'b0;
assign outvalid = ovalid;
assign mula = {signed_a, multiplicand}; 
assign mulb = {signed_b, multiplier  }; 

localparam IDLE  = 2'b00;
localparam WAIT  = 2'b01;
localparam FLUSH = 2'b10;

reg [1:0] current_state, next_state;

always @(*) begin
	case(current_state) 
		IDLE : begin
			if(invalid) begin
				next_state = WAIT;
			end else begin
				next_state = IDLE;
			end
		end
		WAIT : begin
			if(flush) begin
				next_state = FLUSH;
			end else begin 
				if(ovalid) begin
					next_state = IDLE;
				end else begin
					next_state = WAIT;
				end
			end
		end
		FLUSH :
		 	next_state = IDLE;
		default    : 
		 	next_state = IDLE;
	endcase
end

always @(posedge clk or negedge rst)begin
	if(rst) begin
		current_state <= IDLE;
	end else begin
		current_state <= next_state;
	end
end

wire en;
wire arst;
wire mul_ready;
/*verilator lint_off UNUSED*/
wire [XLEN:0] _result_hi;
wire [XLEN:0] _result_lo;
assign en = ( (current_state == WAIT) && !ovalid );
assign arst = ( (current_state == FLUSH) );
assign mul_ready = ( current_state == IDLE );
assign inready = mul_ready;
assign result_hi = {_result_hi[XLEN-2:0], _result_lo[XLEN]};
assign result_lo = _result_lo[XLEN-1:0];

mul #(
	.DATA_BITS(XLEN+1)
)
m0(
	.clk				  (clk			 ),
	.asyn_rst	    (rst			 ),
  .en           (en			   ),
	.syn_rst	 	  (arst			 ),
	.multiplicand	(mula		   ),
	.multiplier		(mulb		   ),
	.outvalid		  (ovalid		 ),
	.result_hi	  (_result_hi),
	.result_lo    (_result_lo)
);

endmodule
