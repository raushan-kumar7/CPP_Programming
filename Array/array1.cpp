// Taking input as character from user and printing the array
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  char arr[n];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  return 0;
}