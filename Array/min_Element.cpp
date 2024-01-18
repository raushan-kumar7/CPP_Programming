// Printing min element in array
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the size of array: ";
  cin >> n;
  int arr[n];
  int min = arr[0];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
    if(min > arr[i]) {
      min = arr[i];
    }
  }
  cout << "Min Element: " << min << endl;
  return 0;
}