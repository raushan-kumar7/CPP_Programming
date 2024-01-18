// Finding Factorial of given number
#include <iostream>
int main() {
  int n, fact = 1;
  cout << "Enter any number: ";
  cin >> n;
  for(int i = 1; i <= n; i++) {
    fact *= i;
  }
  cout << "Factorial is: " << fact << endl;
  return 0;
}