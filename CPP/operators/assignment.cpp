#include <iostream>
using namespace std;
int main() {
  int a, b;

  cout << "\nEnter the value of A: ";
  cin >> a;

  cout << "\nEnter the value of B: ";
  cin >> b;

  cout << "\n\n------------- = Operator --------------------";
  cout << "\n\nValue of A before assigning: " << a;
  a = b;
  cout << "\nValue of A after assigning: " << a;

  cout << "\n\n------------- += Operator --------------------";
  cout << "\n\nValue of A before (+=) : " << a;
  a += b;
  cout << "\nValue of A after (+=): " << a;

  cout << "\n\n------------- -= Operator --------------------";
  cout << "\n\nValue of A before (-=) : " << a;
  a -= b;
  cout << "\nValue of A after (-=): " << a;

  cout << "\n\n------------- *= Operator --------------------";
  cout << "\n\nValue of A before (*=) : " << a;
  a *= b;
  cout << "\nValue of A after (*=): " << a;

  cout << "\n\n------------- /= Operator --------------------";
  cout << "\n\nValue of A before (/=) : " << a;
  a /= b;
  cout << "\nValue of A after (/=): " << a;

  cout << "\n\n------------- %= Operator --------------------";
  cout << "\n\nValue of A before (%=) : " << a;
  a %= b;
  cout << "\nValue of A after (%=): " << a;
  cout << "\n";
  return 0;
}
/*

Enter the value of A: 10

Enter the value of B: 5


------------- = Operator --------------------

Value of A before assigning: 10
Value of A after assigning: 5

------------- += Operator --------------------

Value of A before (+=) : 5
Value of A after (+=): 10

------------- -= Operator --------------------

Value of A before (-=) : 10
Value of A after (-=): 5

------------- *= Operator --------------------

Value of A before (*=) : 5
Value of A after (*=): 25

------------- /= Operator --------------------

Value of A before (/=) : 25
Value of A after (/=): 5

------------- %= Operator --------------------

Value of A before (%=) : 5
Value of A after (%=): 0
*/