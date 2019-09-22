`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:37:11 03/05/2019
// Design Name:   demux_fluxdate
// Module Name:   /home/student/Desktop/lab2/lab02_skel/test_df.v
// Project Name:  lab02_skel
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: demux_fluxdate
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_df;

	// Inputs
	reg in;
	reg sel1;
	reg sel2;

	// Outputs
	wire out1;
	wire out2;
	wire out3;
	wire out4;

	// Instantiate the Unit Under Test (UUT)
	demux_fluxdate uut (
		.in(in), 
		.sel1(sel1), 
		.sel2(sel2), 
		.out1(out1), 
		.out2(out2), 
		.out3(out3), 
		.out4(out4)
	);

	initial begin
		// Initialize Inputs
		in = 0;
		sel1 = 0;
		sel2 = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		in = 1;
		sel1 = 1;
		sel2 = 1;

		// Wait 100 ns for global reset to finish
		#100;
		
		in = 0;
		sel1 = 1;
		sel2 = 1;

		// Wait 100 ns for global reset to finish
		#100;
		
		in = 1;
		sel1 = 0;
		sel2 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

