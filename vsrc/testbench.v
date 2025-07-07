`timescale 1ns / 1ps
module testbench;

reg clk;
reg rst;

/* verilator lint_off UNUSED */
wire  			_inready		;
reg  			  invalid		  ;
reg  			  flush			  ;
reg  [1 :0] mul_signed  ;
reg  [31:0] multiplicand;
reg  [31:0] multiplier	;
wire			  _outvalid	  ;
wire [31:0] _result_hi	;
wire [31:0] _result_lo  ;

top #(
	.XLEN(32)
)
t0(
	.clk					(clk					),
	.rst					(rst					),
  .inready			(_inready			),
  .invalid			(invalid			),
	.flush				(flush				),
	.mul_signed   (mul_signed   ),
	.multiplicand (multiplicand ),
	.multiplier		(multiplier		),
	.outvalid			(_outvalid		),
	.result_hi		(_result_hi		),
	.result_lo		(_result_lo		)
);

initial begin
	clk = 1;
	forever begin
		#1 clk = ~clk;
	end
end

initial begin
 invalid      = 0;
 flush        = 0;
 rst = 1;
 #2 rst = 0; 
 #2
 multiplicand = 32'h00000010;
 multiplier   = 32'h00000004;
 mul_signed   = 2'b11;
 #1 invalid = 1;
 #2 invalid = 0;
 #1
 #68
 multiplicand = 32'h80000010;
 multiplier   = 32'h80000004;
 mul_signed   = 2'b11;
 #1 invalid = 1;
 #2 invalid = 0;
 #1
 #68
 multiplicand = 32'h80000010;
 multiplier   = 32'h80000004;
 mul_signed   = 2'b10;
 #1 invalid = 1;
 #2 invalid = 0;
 #1
 #68
 multiplicand = 32'h80000010;
 multiplier   = 32'h80000004;
 mul_signed   = 2'b00;
 #1 invalid = 1;
 #2 invalid = 0;
 #1
 #68
 multiplicand = 32'h80000010;
 multiplier   = 32'h80000004;
 mul_signed   = 2'b10;
 #10 flush = 1;
 #2 flush = 0;
 #2
 multiplicand = 32'h80000010;
 multiplier   = 32'h80000004;
 mul_signed   = 2'b10;
 #1 invalid = 1;
 #2 invalid = 0;
 $finish;
end

endmodule
