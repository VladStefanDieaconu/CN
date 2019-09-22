`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:59:09 03/05/2019 
// Design Name: 
// Module Name:    demux_structural 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module demux_structural(
   input f,
	input [0:1] sel,
	output out0,
	output out1,
	output out2,
	output out3
	);
	
	wire w1;
	wire w2;
	
	not(w1, sel[0]);
	not(w2, sel[1]);
	
	and(out0, w1, w2,f);
	and(out1, sel[0], w2, f);
	and(out2, w1, sel[1], f);
	and(out3, sel[0], sel[1], f);
	
endmodule 