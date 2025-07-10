module gen_product #(
	parameter DATA_BITS  = 34,
	parameter DDATA_BITS = 68 
)(
	input  [ DATA_BITS-1:0] A   ,
	input  [           2:0] b   ,
	input		 							  cin ,
	output [DDATA_BITS-1:0] p   ,
	output								  cout
);

wire [DATA_BITS-1:0] xn ;
wire [DATA_BITS-1:0] xp ;
wire [DATA_BITS-1:0] xdn;
wire [DATA_BITS-1:0] xdp;
wire seln; 
wire selp; 
wire seldn; 
wire seldp; 

assign xn  = ~ A			 ;
assign xp  =   A       ;
assign xdn = ~(A << 1);
assign xdp =  (A << 1);
assign seln  =  b[2] && ( b[1] ^   b[0]);
assign selp  = !b[2] && ( b[1] ^   b[0]);
assign seldn =  b[2] && (!b[1] && !b[0]);
assign seldp = !b[2] && ( b[1] &&  b[0]);

wire [DATA_BITS-1:0] p_high;
genvar i;
generate
	for(i = 0; i < DATA_BITS; i = i + 1) begin : gen_p
		assign p_high[i] = !(!(seln && xn[i]) && !(seldn && xdn[i]) &&
								    	   !(selp && xp[i]) && !(seldp && xdp[i])    );
	end
endgenerate

assign p		= {p_high, 1'b0, cin, {(DATA_BITS-2){1'b0}}}; 
assign cout = seln || seldn;

endmodule
