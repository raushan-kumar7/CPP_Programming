// Fibonacci Series of given number
#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int first = 0, second = 1, x;
  cout << "Fibonacci Series: ";
  for(int i = 1; i <= n; i++) {
    cout << first << " ";
    x = first + second;
    first = second;
    second = x;
  }
  return 0;
}