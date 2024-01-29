#include <iostream>
using namespace std;

void welMessage() {
  cout << "\n\tWelcome to Our Grading System" << endl;
  cout << "*****---*****---*****---*****---*****---*****---*****" << endl;
  string name;
  cout << "Enter your name: ";
  getline(cin, name);
  cout << "\n\t\tWelcome " << name << "!." << endl;
  cout << "*****---*****---*****---*****---*****---*****---*****" << endl;
}

void byeMessage() {
  cout << "Thanks for using!... Bye bye Have A Good Day" << endl;
}

struct Student {
  string name, gender, course, university_name;
  int reg_no;

  void display()
  {
    cout << "\n-------*******------*******-----******-------" << endl;
    cout << "\n\t\tDisplaying the Details of students: " << endl;
    cout << "Name: " << name << endl;
    cout << "Registation No: " << reg_no << endl;
    cout << "Gender: " << gender << endl;
    cout << "Course: " << course << endl;
    cout << "University Name: " << university_name << endl;
    //cout << "\n-------*******------*******-----******-------" << endl;
  }
};

struct Subject
{
  string sName, sCode, grade;
  int marks;

  void printMarks() {
    cout << sName << "\t\t" << sCode << "\t\t" << marks << "\t" << grade << endl;
  }
};

int main() {
  welMessage();
  Student s;
  cout << "Enter Name: ";
  getline(cin, s.name);
  cout << "Enter Gender: ";
  getline(cin, s.gender);
  cout << "Enter Course: ";
  getline(cin, s.course);
  cout << "Enter University Name: ";
  getline(cin, s.university_name);
  cout << "Enter Registration No.: ";
  cin >> s.reg_no;

  int n;
  cout << "Enter the no of subjects: ";
  cin >> n;
  Subject sub[n];
  int totalMarks = 0;
  cin.ignore();
  for (int i = 0; i < n; i++)
  {
    cout << "Enter subject name: ";
    getline(cin, sub[i].sName);
    cout << "Enter subject code: ";
    getline(cin, sub[i].sCode);
    cout << "Enter marks: ";
    cin >> sub[i].marks;
    totalMarks += sub[i].marks;
    cout << "Enter Grade: ";
    cin >> sub[i].grade;
    cout << endl;
    cin.ignore();
  }

  s.display();
  cout << "x-----------------------------x-----------------x"<< endl;
  cout << "\n\tStudent Marks Details: " << endl;
  cout << "x-----------------------------x-----------------x"<< endl;
  cout << "Subject Name" << "\tSubject Code" << "\tMarks" << "\tGrade" << endl;
  for (int i = 0; i < n; i++)
  {
    sub[i].printMarks();
  }

  float average = static_cast<float>(totalMarks)/n;
  cout << "\nAverage Marks: " << average << endl;
  byeMessage();
  return 0;
}


