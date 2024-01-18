// Taking string and printing
#include <iostream>
using namespace std;
int main() {
  // string name, college, course;
  // cout << "Enter your name: ";
  // cin >> name;
  // cout << "Enter your college name: ";
  // cin >> college;
  // cout << "Enter your course: ";
  // cin >> course;

  // cout << "Name: " << name << endl;
  // cout << "College: " << college << endl;
  // cout << "Course: " << course << endl;

  string name, college, course;
  cout << "Enter your name: ";
  getline(cin, name);
  cout << "Enter your college name: ";
  getline(cin, college);
  cout << "Enter your course: ";
  getline(cin, course);

  cout << "Name: " << name << endl;
  cout << "College: " << college << endl;
  cout << "Course: " << course << endl;
  return 0;
}