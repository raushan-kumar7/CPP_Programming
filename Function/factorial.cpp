// Factorial of given number using function
#include <iostream>
using namespace std;

void factorial(int n) {
  int fact = 1;
  for(int i = 1; i <= n; i++) {
    fact *= i;
  }
  cout << "Factorial of given number: " << fact << endl;
}

int main() {
  int n;
  cout << "Enter number: ";
  cin >> n;
  fibonacci(n);
  factorial(n);
  return 0;
}