// Printing sum & average of array elements
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the size of array: ";
  cin >> n;
  int arr[n], sum = 0, avg;
  for(int i = 0; i < n; i++) {
    cout << "Array [" << i <<"] = " ;
    cin >> arr[i];
    sum += arr[i];
    avg = sum / n;
  }
  cout << "Sum = " << sum << endl;
  cout << "Average = " << avg << endl;
  return 0;
}