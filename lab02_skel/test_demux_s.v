`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:59:26 03/05/2019 
// Design Name: 
// Module Name:    test_demux_s 
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
module test_demux_s;

	// Inputs
	reg f;
	reg [0:1] sel;
	wire out0;
	wire out1;
	wire out2;
	wire out3;

	

	// Instantiate the Unit Under Test (UUT)
	demux_structural uut (
		.out(out), 
		.in1(in1),
		.in2(in2)
	);

	initial begin
		// Initialize Inputs
		in1 = 0;
		in2 = 1;

		// Wait 100 ns for global reset to finish
		#100;
      in1 = 0; 
		in2 = 0;
		// Add stimulus here

	end
      
endmodule

