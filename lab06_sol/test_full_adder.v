`timescale 1ns / 1ps

module test_full_adder;

        // Inputs
        reg A;
        reg B;
        reg Cin;

        // Outputs
        wire S;
        wire Cout;

        // Instantiate the Unit Under Test (UUT)
        full_adder uut (
                .S(S),
                .Cout(Cout),
                .A(A),
                .B(B),
                .Cin(Cin)
        );

        initial begin
                // Initialize Inputs
                A = 0;
                B = 0;
                Cin = 0;

                // Wait 100 ns for global reset to finish
                #100;

                // Add stimulus here
                A = 0; B = 0; Cin = 1;
                #100 A = 0; B = 1; Cin = 0;
                #100 A = 0; B = 1; Cin = 1;
                #100 A = 1; B = 0; Cin = 0;
                #100 A = 1; B = 0; Cin = 1;
                #100 A = 1; B = 1; Cin = 0;
                #100 A = 1; B = 1; Cin = 1;
        end
endmodule
