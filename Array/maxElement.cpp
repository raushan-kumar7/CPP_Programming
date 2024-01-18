// Printing max element in array
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the size of array: ";
  cin >> n;
  int arr[n];
  int max = arr[0];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for(int i = 0; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  cout << "Max Element: " << max << endl;
  return 0;
}