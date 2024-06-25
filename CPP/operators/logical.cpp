#include <iostream>
using namespace std;
int main() {
  int a, b;

  cout << "\nEnter the value of A: ";
  cin >> a;

  cout << "\nEnter the value of B: ";
  cin >> b;

  cout << "\n\n------------- && Operator w.r.t 5 --------------------";
  if (a > 5 && b > 5) {
    cout << "\nBoth values are greater than 5";
  } else {
    cout << "\nBoth values are not greater than 5";
  }

  cout << "\n\n------------- || Operator w.r.t 5 --------------------";
  if (a > 5 || b > 5) {
    cout << "\nEither value is greater than 5";
  } else {
    cout << "\nEither values are not greater than 5";
  }

  cout << "\n\n------------- ! Operator w.r.t 5 --------------------";
  if (!(a > 5)) {
    cout << "\nValue of A= " << a << " is greater than 5";
  } else {
    cout << "\nValue of A= " << a << " is not greater than 5\n\n";
  }
  return 0;
}
/*

------------- && Operator w.r.t 5 --------------------
Both values are not greater than 5

------------- || Operator w.r.t 5 --------------------
Either value is greater than 5

------------- ! Operator w.r.t 5 --------------------
Value of A= 10 is not greater than 5

*/