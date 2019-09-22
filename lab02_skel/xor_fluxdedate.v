// CN1 -  schelet lab02
// flux de date
module xor_fluxdedate(
  output out,
  input in1,
  input in2
  );

  assign out = (in1 & ~in2) | (in1 & in2);

endmodule
