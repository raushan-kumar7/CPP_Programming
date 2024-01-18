/* Marix Operation [Addition (+)] */

#include <iostream>
using namespace std;

int main() {
  int r1, c1;
  cout << "Enter 1st matrix row: ";
  cin >> r1;
  cout << "Enter 1st matrix column: ";
  cin >> c1;

  int a[r1][c1];

  cout << "Enter 1st Matrix Element: ";
  for (int i = 0; i < r1; i++) {
    for (int j = 0; j < c1; j++) {
      cin >> a[i][j];
    }
  }

  cout << "1st Matrix: " << endl;
  for (int i = 0; i < r1; i++) {
    for (int j = 0; j < c1; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  int r2, c2;
  cout << "Enter 2nd matrix row: ";
  cin >> r2;
  cout << "Enter 2nd matrix column: ";
  cin >> c2;

  int b[r2][c2];

  cout << "Enter 2nd Matrix Element: ";
  for (int i = 0; i < r2; i++) {
    for (int j = 0; j < c2; j++) {
      cin >> b[i][j];
    }
  }

  cout << "2nd Matrix: " << endl;
  for (int i = 0; i < r2; i++) {
    for (int j = 0; j < c2; j++) {
      cout << b[i][j] << " ";
    }
    cout << endl;
  }

  if (r1 != r2 || c1 != c2) {
    cout << "Error! Matrices cannot be added." << endl;
    return 1;
  }

  int c[r1][c2];
  for (int i = 0; i < r1; i++) {
    for (int j = 0; j < c2; j++) {
      c[i][j] = a[i][j] + b[i][j];
    }
  }

  cout << "Addition of two matrices: " << endl;
  for (int i = 0; i < r1; i++) {
    for (int j = 0; j < c2; j++) {
      cout << c[i][j] << " ";
    }
    cout << endl;
  }
  
  return 0;
}
