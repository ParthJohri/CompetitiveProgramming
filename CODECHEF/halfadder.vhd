// Code your design here

// Half Adder Gate Flow
module halfadder(
a,b,sum,carry);
  input a,b;
  output sum,carry;
  sum = a xor b;
  carry = a and b;
endmodule
