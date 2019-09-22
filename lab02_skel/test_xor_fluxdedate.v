
module test_xorfluxdedate;

	// Inputs
	reg in1;
	reg in2;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	xor_fluxdedate uut (
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

