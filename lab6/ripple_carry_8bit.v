`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// ACS
// Computer Design 1
//  
// Module Name:  		ripple_carry_8bit
// Project Name:		Laborator 6
// Target Devices: 		Digilent Nexys 3
//////////////////////////////////////////////////////////////////////////////////

module ripple_carry_8bit(
		output carry_out,
		output [7:0] sum,
		input  [7:0] A,
		input  [7:0] B,
		input carry_in
    );
	
	wire w1, w2, w3, w4, w5, w6, w7;
	
	// TODO 2: Implementai un sumator ripple-carry pe 8 bii folosind modul full-adder implementat anterior.
	// Hint: buffer pentru transportul din rangul inferior
	full_adder fa0 (sum[0], w1, A[0], B[0], 1'b0);
	full_adder fa1 (sum[1], w2, A[1], B[1], w1);
	full_adder fa2 (sum[2], w3, A[2], B[2], w2);
	full_adder fa3 (sum[3], w4, A[3], B[3], w3);
	full_adder fa4 (sum[4], w5, A[4], B[4], w4);
	full_adder fa5 (sum[5], w6, A[5], B[5], w5);
	full_adder fa6 (sum[6], w7, A[6], B[6], w6);
	full_adder fa7 (sum[7], carry_out,  A[7], B[7], w7);




endmodule
