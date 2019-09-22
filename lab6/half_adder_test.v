`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// ACS
// Computer Design 1
//
// Design Name:   		half_adder
// Module Name:  		half_adder_test.v
// Project Name:		Laborator 6
// Target Devices: 		Digilent Nexys 3
//////////////////////////////////////////////////////////////////////////////////

module half_adder_test;

	// Inputs
	reg bit_A;
	reg bit_B;

	// Outputs
	wire sum;
	wire carry;

	// Instantiate the Unit Under Test (UUT)
	half_adder uut (
		.sum(sum), 
		.carry(carry), 
		.bit_A(bit_A), 
		.bit_B(bit_B)
	);

	initial begin
		// Initialize Inputs
		bit_A = 0;
		bit_B = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// TODO 1.4: Adãugaþi cazuri relevante pentru testare.
		
	end
      
endmodule

