`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:54:25 01/31/2019
// Design Name:   modul03
// Module Name:   /home/daniel/Desktop/lab02_skel/test_modul03.v
// Project Name:  lab02_skel
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: modul03
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_xorprocedural;

	// Inputs
	reg in1;
	reg in2;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	xor_procedural uut (
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
