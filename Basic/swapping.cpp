// Swaping two number
#include <iostream>
using namespace std;
int main() {
  // int a, b, temp;
  // cout << "Before Swapping 1st number: ";
  // cin >> a;
  // cout << "Before Swapping 2nd number: ";
  // cin >> b;
  // temp = a;
  // a = b;
  // b = temp;
  // cout << "After Swapping 1st number: " << a << endl;
  // cout << "After Swapping 2nd number: " << b << endl;

  // int x = 5, y = 10;
  // x = x + y;
  // y = x - y;
  // x = x - y;
  // cout << x << " " << y << endl;

  int z = 11, k = 25;
  z = z ^ k;
  k = z ^ k;
  z = z ^ k;
  cout << z << " " << k << endl;
  return 0;
}