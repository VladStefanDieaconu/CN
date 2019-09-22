`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// ACS
// Computer Design 1
//  
// Module Name:  		full_adder
// Project Name:		Laborator 6
// Target Devices: 		Digilent Nexys 3
//////////////////////////////////////////////////////////////////////////////////

module full_adder(
		output sum,
		output carry_out,
		input bit_A,
		input bit_B,
		input carry_in
    );
	
	wire sum1, carry_out_1;
	
	// TODO 1.5: Implementai un full-adder folosind doua instane ale modulului half-adder creat anterior.
half_adder_structural ha1(sum1, carry_out_1, bit_A, bit_B);
half_adder_structural ha2(sum, carry_out_2, sum1, carry_in);

xor(carry_out, carry_out_1, carry_out_2);

endmodule
