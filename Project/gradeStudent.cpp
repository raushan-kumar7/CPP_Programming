/*
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
*/

/*
Output:
        Welcome to Our Grading System
*****---*****---*****---*****---*****---*****---*****
Enter your name: Raushan

                Welcome Raushan!.
*****---*****---*****---*****---*****---*****---*****
Enter Name: Raushan Kumar
Enter Gender: Male
Enter Course: B.Tech(CSE)
Enter University Name: Lovely Professional University
Enter Registration No.: 12104685
Enter the no of subjects: 2
Enter subject name: Physics
Enter subject code: PHY119
Enter marks: 80
Enter Grade: A

Enter subject name: Maths
Enter subject code: MTH302
Enter marks: 90
Enter Grade: A+


-------*******------*******-----******-------

                Displaying the Details of students: 
Name: Raushan Kumar
Registation No: 12104685
Gender: Male
Course: B.Tech(CSE)
University Name: Lovely Professional University
x-----------------------------x-----------------x

        Student Marks Details:
x-----------------------------x-----------------x
Subject Name    Subject Code    Marks   Grade
Physics         PHY119          80      A
Maths           MTH302          90      A+

Average Marks: 85
Thanks for using!... Bye bye Have A Good Day
*/

/*
#include <iostream>
using namespace std;

struct Student {
  string name, gender, course, university_name;
  int reg_no;

  void display();
};

struct Subject {
  string sName, sCode, grade;
  int marks;

  void printMarks();
};

void welMessage() {
  cout << "\n\tWelcome to Our Grading System" << endl;
  cout << "*****---*****---*****---*****---*****---*****---*****" << endl;
}

void byeMessage() {
  cout << "Thanks for using!... Bye bye Have A Good Day" << endl;
}

void getStudentDetails(Student& s);
void getSubjectDetails(Subject sub[], int n);
void displayStudentDetails(const Student& s);
void displaySubjectDetails(const Subject sub[], int n);
float calculateAverageMarks(const Subject sub[], int n);

int main() {
  welMessage();

  Student s;
  getStudentDetails(s);

  int n;
  cout << "Enter the no of subjects: ";
  cin >> n;

  Subject sub[n];
  getSubjectDetails(sub, n);

  displayStudentDetails(s);

  cout << "x-----------------------------x-----------------x" << endl;
  cout << "\n\tStudent Marks Details: " << endl;
  cout << "x-----------------------------x-----------------x" << endl;
  cout << "Subject Name" << "\tSubject Code" << "\tMarks" << "\tGrade" << endl;
  displaySubjectDetails(sub, n);

  float average = calculateAverageMarks(sub, n);
  cout << "\nAverage Marks: " << average << endl;

  byeMessage();
  return 0;
}

void Student::display() {
  cout << "\n-------*******------*******-----******-------" << endl;
  cout << "\n\t\tDisplaying the Details of students: " << endl;
  cout << "Name: " << name << endl;
  cout << "Registation No: " << reg_no << endl;
  cout << "Gender: " << gender << endl;
  cout << "Course: " << course << endl;
  cout << "University Name: " << university_name << endl;
}

void Subject::printMarks() {
  cout << sName << "\t\t" << sCode << "\t\t" << marks << "\t" << grade << endl;
}

void getStudentDetails(Student& s) {
  cout << "Enter Name: ";
  cin.ignore();
  getline(cin, s.name);
  cout << "Enter Gender: ";
  getline(cin, s.gender);
  cout << "Enter Course: ";
  getline(cin, s.course);
  cout << "Enter University Name: ";
  getline(cin, s.university_name);
  cout << "Enter Registration No.: ";
  cin >> s.reg_no;
}

void getSubjectDetails(Subject sub[], int n) {
  cin.ignore();
  for (int i = 0; i < n; i++) {
    cout << "Enter subject name: ";
    getline(cin, sub[i].sName);
    cout << "Enter subject code: ";
    getline(cin, sub[i].sCode);
    cout << "Enter marks: ";
    cin >> sub[i].marks;
    cout << "Enter Grade: ";
    cin >> sub[i].grade;
    cout << endl;
    cin.ignore();
  }
}

void displayStudentDetails(const Student& s) {
  s.display();
}

void displaySubjectDetails(const Subject sub[], int n) {
  for (int i = 0; i < n; i++) {
    sub[i].printMarks();
  }
}

float calculateAverageMarks(const Subject sub[], int n) {
  int totalMarks = 0;
  for (int i = 0; i < n; i++) {
    totalMarks += sub[i].marks;
  }
  return static_cast<float>(totalMarks) / n;
}

*/
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


