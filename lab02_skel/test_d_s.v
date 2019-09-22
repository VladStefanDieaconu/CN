`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:28:08 03/05/2019
// Design Name:   demux_structural
// Module Name:   /home/student/Desktop/lab2/lab02_skel/test_d_s.v
// Project Name:  lab02_skel
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: demux_structural
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_d_s;

	// Inputs
	reg f;
	reg [0:1] sel;

	// Outputs
	wire out0;
	wire out1;
	wire out2;
	wire out3;

	// Instantiate the Unit Under Test (UUT)
	demux_structural uut (
		.f(f), 
		.sel(sel), 
		.out0(out0), 
		.out1(out1), 
		.out2(out2), 
		.out3(out3)
	);

	initial begin
		// Initialize Inputs
		f = 0;
		sel = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		f = 1;
		sel = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

