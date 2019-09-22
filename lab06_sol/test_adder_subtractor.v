`timescale 1ns / 1ps

module test_adder_subtractor;

        // Inputs
        reg [3:0] A;
        reg [3:0] B;
        reg button;

        // Outputs
        wire [3:0] R;

        // Instantiate the Unit Under Test (UUT)
        adder_subtractor uut (
                .R(R),
                .A(A),
                .B(B),
                .button(button)
        );

        initial begin
                // Initialize Inputs
                A = 0;
                B = 0;
                button = 0;

                // Wait 100 ns for global reset to finish
                #100;

                // Add stimulus here
                A = 10; B = 15;
                #50 button = 1;

                #50 button = 0; A = 1; B = 4;
                #50 button = 1;
        end
endmodule
