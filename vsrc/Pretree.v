`timescale 1ns / 1ps
module Pretree #(
	parameter STAGE = 1
)(
	input [67:0] Gin,
	input [67:0] Pin,
	output [67:0] Gout,
	output [67:0] Pout
);

genvar i;
generate
	for(i = 0; i < 68; i = i + 1) begin : _bit
		if(i < (1 << (STAGE - 1))) begin : low
			assign Gout[i] = Gin[i];
			assign Pout[i] = Pin[i];
		end else begin : high
			assign Gout[i] = Gin[i] | (Pin[i] & Gin[i - (1 << (STAGE - 1))]);
			assign Pout[i] = Pin[i] &  Pin[i - (1 << (STAGE - 1))];
		end
	end
endgenerate

endmodule

