// Code your design here

// Half Adder Gate Flow
module halfadder(
a,b,sum,carry);
  input a,b;
  output sum,carry;
  sum = a xor b;
  carry = a and b;
endmodule

// Half Adder Data Flow
module halfadder(
);
  input a,b;
  output sum,carry;
  assign sum = a ^ b;
  assign carry = a & b;
endmodule

// Full Adder Gate Flow
module fulladder(
a,b,cin,sum,cout);
  input a,b,cin;
  output sum,cout;
  wire x,y,z;
  x = a xor b;
  y = a and b;
  sum = cin xor x;
  z = cin and x;
  carry = y or z;
endmodule

// Full Adder Data Flow
module fulladder(
a,b,cin,sum,cout);
  input a,b,cin;
  output sum,cout;
  wire x,y,z;
  assign x = a ^ b;
  assign y = a & b;
  assign sum = cin ^ x;
  assign z = cin and x;
  assign carry = y | z;
endmodule