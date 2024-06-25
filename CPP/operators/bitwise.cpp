#include <iostream>
using namespace std;
int main() {
  unsigned int a = 10; // binary = 11110
  unsigned int b = 20; // binary = 10100
  unsigned int res;

  cout << "\n\n------------- & AND Operator --------------------";
  res = a & b;
  cout << "\na AND b = " << res;

  cout << "\n\n------------- | OR Operator --------------------";
  res = a | b;
  cout << "\na OR b = " << res;

  cout << "\n\n------------- ^ XOR Operator --------------------";
  res = a ^ b;
  cout << "\na XOR b = " << res;

  cout << "\n\n------------- ~ one's complement Operator -----------------";
  res = ~a;
  cout << "\nOne's complement of a = " << res;

  cout << "\n\n------------- << left shift Operator -----------------";
  res = a << 2;
  cout << "\nLeft shift of a = " << res;

  cout << "\n\n------------- >> right shift Operator -----------------";
  res = a >> 2;
  cout << "\nLeft shift of a = " << res;

  cout << "\n\n\n";
  return 0;
}

/*

------------- & AND Operator --------------------
a AND b = 00000000

------------- | OR Operator --------------------
a OR b = 00011110

------------- ^ XOR Operator --------------------
a XOR b = 00011110

------------- ~ one's complement Operator -----------------
One's complement of a = 11110101

------------- << left shift Operator -----------------
Left shift of a = 00101000

------------- >> right shift Operator -----------------
Left shift of a = 00000010
*/