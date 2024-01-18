// Fibonacci Series of given number using function
#include <iostream>
using namespace std;

void fibonacci(int n) {
  int first = 0, second = 1, x;
  cout << "Fibonacci Series: ";
  for(int i = 1; i <= n; i++) {
    cout << first << " ";
    x = first + second;
    first = second;
    second = x;
  }
}

int main() {
  int n;
  cin >> n;
  fibonacci(n);
  return 0;
}