`timescale 1ns / 1ps

module test_ripple_carry_subtractor;

        // Inputs
        reg [7:0] A;
        reg [7:0] B;
        reg Cin;

        // Outputs
        wire [7:0] D;
        wire Cout;

        // Instantiate the Unit Under Test (UUT)
        ripple_carry_subtractor #(
                .DATA_WIDTH(8)
        ) uut (
                .D(D),
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
                A = 1; B = 1;
                #100 A = 25; B = 7;
                #100 A = 8; B = 10;
                #100 A = -1; B = 1;
                #100 A = -1; B = -2;
                #100 A = 10; B = -10;
        end
endmodule
