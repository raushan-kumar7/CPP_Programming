#include <iostream>
#include <limits>
using namespace std;

void welMessage() {
  cout << "\n\tWelcome to Our Calculator System" << endl;
  cout << "*****---*****---*****---*****---*****---*****---*****" << endl;
  string name;
  cout << "Enter your name: ";
  getline(cin, name);
  cout << "\n\t\tWelcome " << name << "!." << endl;
  cout << "*****---*****---*****---*****---*****---*****---*****" << endl;
}

void byeMessage(){
  cout << "\nThank you for using our calculator system. Goodbye!." << endl;
}

double calculate(const double arr[], int value, char op) {
  double res = arr[0];
  for (int i = 1; i < value; i++) {
    switch (op) {
    case '+':
      res += arr[i];
      break;
    case '-':
      res -= arr[i];
      break;
    case '*':
      res *= arr[i];
      break;
    case '/':
      if (arr[i] == 0) {
        cout << "Error! Division by zero" << endl;
        return 0;
      }
      res /= arr[i];
      break;
    default:
      cout << "Error! Invalid Operator.. Please try again" << endl;
      return 0;
    }
  }
  return res;
}

int main() {
  welMessage();
  while(true) {
    cout << "\nAvailable features: " << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;

    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice >= 1 && choice <= 4) {
      double arr[100];
      int value = 0;
      cout << "Enter values (non-numeric character to stop): ";
      while (cin >> arr[value] && value < 100) {
        value++;
      }
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');

      char op;
      cout << "Enter operation (+, -, *, /): ";
      cin >> op;

      if (op == '+' || op == '-' || op == '*' || op == '/') {
        double res = calculate(arr, value, op);
        cout << "Result: " << res << endl;
      }
      else {
        cout << "Error! Invalid Operator.. Please try again" << endl;
      }
    }
    else if (choice == 5) {
      byeMessage();
      return 0;
    }
    else {
      cout << "Error!.. Invalid choice." << endl;
    }
  }
  return 0;
}
