#include <iostream>
using namespace std;
int main() {
  int a, b;

  cout << "\nEnter the value of A: ";
  cin >> a;

  cout << "\nEnter the value of B: ";
  cin >> b;

  cout << "\n\n------------- (? :) Ternary operator -----------------";

  int max = (a > b) ? a : b;
  cout << "\n\nMaximum num of " << a << " and " << b << " is " << max;

  cout << "\n\n";
  return 0;
}
/*

Enter the value of A: 10

Enter the value of B: 5


------------- (? :) Ternary operator -----------------

Maximum num of 10 and 5 is 10

*/