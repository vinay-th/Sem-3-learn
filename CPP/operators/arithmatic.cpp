#include <iostream>
using namespace std;

int main() {
  int a, b;

  cout << "\nEnter the value of A: ";
  cin >> a;
  cout << "\nEnter the value of B: ";
  cin >> b;

  cout << "\n\n--------------------- Addition ---------------------------";
  cout << "\n\nThe value of A is: " << a;
  cout << "\nThe value of B is: " << b;
  cout << "\nThe value of addition is: " << a + b;

  cout << "\n\n--------------------- Subtraction ---------------------------";
  cout << "\n\nThe value of A is: " << a;
  cout << "\nThe value of B is: " << b;
  cout << "\nThe value of subtraction is: " << a - b;

  cout
      << "\n\n--------------------- Multiplication ---------------------------";
  cout << "\n\nThe value of A is: " << a;
  cout << "\nThe value of B is: " << b;
  cout << "\nThe value of multiplication is: " << a * b;

  cout << "\n\n--------------------- Division ---------------------------";
  cout << "\n\nThe value of A is: " << a;
  cout << "\nThe value of B is: " << b;
  cout << "\nThe value of division is: " << a / b;

  cout << "\n\n--------------------- Modulo ---------------------------";
  cout << "\n\nThe value of A is: " << a;
  cout << "\nThe value of B is: " << b;
  cout << "\nThe value of modulo is: " << a % b;

  return 0;
}
/*
Enter the value of A: 10

Enter the value of B: 5


--------------------- Addition ---------------------------

The value of A is: 10
The value of B is: 5
The value of addition is: 15

--------------------- Subtraction ---------------------------

The value of A is: 10
The value of B is: 5
The value of subtraction is: 5

--------------------- Multiplication ---------------------------

The value of A is: 10
The value of B is: 5
The value of multiplication is: 50

--------------------- Division ---------------------------

The value of A is: 10
The value of B is: 5
The value of division is: 2

--------------------- Modulo ---------------------------

The value of A is: 10
The value of B is: 5
The value of modulo is: 0
*/