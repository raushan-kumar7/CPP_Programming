// Taking input as integer from user and printing the array
#include <iostream>
using namespace std;

int main() {
  // arr[5] = {1, 2, 3, 4, 5};
  // for(int i = 0; i < 5; i++) {
  //   cout << arr[i] << " ";
  // }

  int n;
  cout << "Enter the size of array: ";
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++) {
    cout << "Array [" << i <<"] = " ;
    cin >> arr[i];
  }
  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}