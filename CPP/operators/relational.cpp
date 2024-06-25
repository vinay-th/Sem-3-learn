#include <iostream>
using namespace std;
int main() {
  int a, b;

  cout << "\nEnter the value of A: ";
  cin >> a;

  cout << "\nEnter the value of B: ";
  cin >> b;

  cout << "\n\n------------- == Operator --------------------";
  if (a == b) {
    cout << "\nValues are equal";
  } else {
    cout << "\nValues are not equal";
  }

  cout << "\n\n------------- != Operator --------------------";
  if (a != b) {
    cout << "\nValues are not equal";
  } else {
    cout << "\nValues are equal";
  }

  cout << "\n\n------------- > Operator --------------------";
  if (a > b) {
    cout << "\nValue of A= " << a << " is greater than B= " << b;
  } else {
    cout << "\nValue of B= " << b << " is greater than A= " << a;
  }

  cout << "\n\n------------- < Operator --------------------";
  if (a < b) {
    cout << "\nValue of A= " << a << " is smaller than B= " << b;
  } else {
    cout << "\nValue of B= " << b << " is smaller than A= " << a;
  }

  cout << "\n\n------------- >= Operator --------------------";
  if (a >= b) {
    cout << "\nValue of A= " << a << " is greater or equal to B= " << b;
  } else {
    cout << "\nValue of B= " << b << " is greater or equal to A= " << a;
  }

  cout << "\n\n------------- <= Operator --------------------";
  if (a <= b) {
    cout << "\nValue of A= " << a << " is smaller or equal to B= " << b;
  } else {
    cout << "\nValue of B= " << b << " is smaller or equal to A= " << a;
  }
  return 0;
}
/*


Enter the value of A: 10

Enter the value of B: 5


------------- == Operator --------------------
Values are not equal

------------- != Operator --------------------
Values are not equal

------------- > Operator --------------------
Value of A= 10 is greater than B= 5

------------- < Operator --------------------
Value of B= 5 is smaller than A= 10

------------- > Operator --------------------
Value of A= 10 is greater or equal to B= 5

------------- < Operator --------------------
Value of B= 5 is smaller or equal to A= 10
*/