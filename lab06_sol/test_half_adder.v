`timescale 1ns / 1ps

module test_half_adder;

        // Inputs
        reg A;
        reg B;

        // Outputs
        wire S;
        wire C;

        // Instantiate the Unit Under Test (UUT)
        half_adder uut (
                .S(S),
                .C(C),
                .A(A),
                .B(B)
        );

        initial begin
                // Initialize Inputs
                A = 0;
                B = 0;

                // Wait 100 ns for global reset to finish
                #100;

                // Add stimulus here
                A = 0; B = 1;
                #100 A = 1; B = 0;
                #100 A = 1; B = 1;
        end
endmodule
