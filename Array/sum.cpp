// Sum of array Elements
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int sum = 0;
  for(int i = 0; i < n; i++) {
    sum += arr[i];
  }
  cout << "Sum of array element: " << sum << endl;

  // array
  // int arr[100], n;
  // cin >> n;
  // for(int i = 0; i < n; i++) {
  //   cin >> arr[i];
  // }

  // int sum = 0;
  // for(int i = 0; i < n; i++) {
  //   sum += arr[i];
  // }
  // cout << "Sum of array element: " << sum << endl;
  return 0;
}