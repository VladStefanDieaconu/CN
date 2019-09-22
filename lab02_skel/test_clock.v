`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:30:32 03/05/2019
// Design Name:   clock
// Module Name:   /home/student/Desktop/lab2/lab02_skel/test_clock.v
// Project Name:  lab02_skel
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: clock
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_clock;

	// Inputs
	reg clk;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	clock uut (
		.clk(clk), 
		.out(out)
	);

	always begin
   #5 clk = ~clk;
end
 
initial begin
   clk = 0;
end
      
endmodule

