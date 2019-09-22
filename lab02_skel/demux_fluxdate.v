`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:00:52 03/05/2019 
// Design Name: 
// Module Name:    demux_fluxdate 
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
module demux_fluxdate(input in, input sel1, 
	input sel2, output out1, output out2,
	output out3, output out4
    );
	 
	 assign out1 = in & ~sel1 & ~sel2;
	 assign out2 = in & ~sel1 & sel2;
	 assign out3 = in & sel1 & ~sel2;
	 assign out4 = in & sel1 & sel2;


endmodule
