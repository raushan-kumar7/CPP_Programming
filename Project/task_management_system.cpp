#include <iostream>
#include <vector>
#include <string>
using namespace std;

void welcomeMessage() {
  cout << "\n\n";
  cout << "\t\t============================================================" << endl;
  cout << "\t\t|               Task Management System                     |" << endl;
  cout << "\t\t============================================================" << endl;
  string name;
  cout << "\nEnter your name: ";
  getline(cin, name);
  cout << endl;
  cout << "\t\t\t\t----------------------------------" << endl;
  cout << "\t\t\t\t|    Welcome " << name << "!.     |" << endl;
  cout << "\t\t\t\t----------------------------------" << endl;
}

struct Task {
  string date, task_name, start_time, end_time;
  float hours;
};

vector<Task> routine_tasks;
vector<Task> college_tasks;
vector<Task> extra_tasks;
vector<Task> hobbies_tasks;
vector<Task> extra_curricular_tasks;

void addTask(vector<Task> &taskList) {
  Task t;
  cout << "\t\tEnter date (DD-MM-YYYY): ";
  cin >> t.date;
  cout << "\t\tEnter task name: ";
  cin.ignore();
  getline(cin, t.task_name);
  cout << "\t\tEnter start time (HH:MM): ";
  cin >> t.start_time;
  cout << "\t\tEnter end time (HH:MM): ";
  cin >> t.end_time;
  cout << "\t\tEnter hours: ";
  cin >> t.hours;
  cout << "\t\tSuccess! Your task has been added." << endl;
  taskList.push_back(t);
}

void viewTask(const vector<Task> &taskList) {
  if (taskList.empty()) {
    cout << "\t\tNo tasks available." << endl;
    return;
  }
  cout << "\t\t_____________________________________________________________________________________________" << endl;
  cout << "\t\tDate" << "\t\t" << "Task Name" << "\t\t" << "Start Time" << "\t\t" << "End Time" << "\t\t" << "Hours" << endl;
  cout << "\t\t_____________________________________________________________________________________________" << endl;
  for (const auto& task : taskList) {
    cout << "\t\t" << task.date << "\t" << task.task_name << "\t\t\t" << task.start_time << "\t\t\t" << task.end_time << "\t\t\t" << task.hours << endl;
  }
}

void deleteTask(vector<Task> &taskList) {
  if (taskList.empty()) {
    cout << "\t\tNo tasks available for deletion." << endl;
    return;
  }
  viewTask(taskList);
  int idx;
  cout << "\t\tEnter the index of the task to delete: ";
  cin >> idx;
  if (idx >= 0 && idx < taskList.size()) {
    taskList.erase(taskList.begin() + idx);
    cout << "\t\tSuccess! Task deleted." << endl;
  } else {
    cout << "\t\tERROR! Invalid index." << endl;
  }
}

void modifyTask(vector<Task> &taskList) {
  if (taskList.empty()) {
    cout << "\t\tNo tasks available to modify." << endl;
    return;
  }
  viewTask(taskList);
  int idx;
  cout << "\n\t\tEnter the index of the task to modify: ";
  cin >> idx;
  if (idx >= 0 && idx < taskList.size()) {
    Task &t = taskList[idx];
    cout << "\t\tEnter date (DD-MM-YYYY): ";
    cin >> t.date;
    cout << "\t\tEnter task name: ";
    cin.ignore();
    getline(cin, t.task_name);
    cout << "\t\tEnter start time (HH:MM): ";
    cin >> t.start_time;
    cout << "\t\tEnter end time (HH:MM): ";
    cin >> t.end_time;
    cout << "\t\tEnter hours: ";
    cin >> t.hours;
    cout << "\t\tSuccess! Task modified." << endl;
  } else {
    cout << "\t\tERROR! Invalid index." << endl;
  }
}

void generateReport(const vector<Task> &taskList) {
  if (taskList.empty()) {
    cout << "\t\tNo tasks available." << endl;
    return;
  }
  cout << endl;
  cout << "_____________________________________________________________________________________________" << endl;
  cout << "Date" << "\t\t" << "Task Name" << "\t\t" << "Start Time" << "\t\t" << "End Time" << "\t\t" << "Hours" << endl;
  cout << "_____________________________________________________________________________________________" << endl;
  for (const auto& task : taskList) {
    cout << task.date << "\t" << task.task_name << "\t\t\t" << task.start_time << "\t\t\t" << task.end_time << "\t\t\t" << task.hours << endl;
  }
}

void byeMessage() {
  cout << "\t\t----------------------------------------------------------------" << endl;
  cout << "\t\t| Bye Bye! Thank You for choosing our system. Have a good day! |" << endl;
  cout << "\t\t----------------------------------------------------------------" << endl;
}

int main() {
  welcomeMessage();
  int choice;
  do {
    cout << "\nAvailable Features: " << endl;
    cout << "----------------------------------"<< endl;
    cout << "||\t 1. Add Task \t\t||" << endl;
    cout << "||\t 2. View Task \t\t||" << endl;
    cout << "||\t 3. Delete Task \t||" << endl;
    cout << "||\t 4. Modify Task \t||" << endl;
    cout << "||\t 5. Reports \t\t||" << endl;
    cout << "||\t 6. Exit \t\t||" << endl;
    cout << "----------------------------------"<< endl;
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
      case 1: {
        char op;
        do {
          cout << endl;
          cout << "\t\t\t-:Add Task Menu:-" << endl;
          cout << "\t\tx-----------------x----------x" << endl;
          cout << "\t\t|| a. Routine Task          ||" << endl;
          cout << "\t\t|| b. College Related Task  ||" << endl;
          cout << "\t\t|| c. Extra Task            ||" << endl;
          cout << "\t\t|| d. Hobbies               ||" << endl;
          cout << "\t\t|| e. Extra-curricular Task ||" << endl;
          cout << "\t\t|| q. Back Main Menu        ||" << endl;
          cout << "\t\tx-----------------x----------x" << endl;
          cout << endl;
          cout << "\t\tEnter choice: ";
          cin >> op;

          switch(op) {
            case 'a':
              cout << "\t\t\t\t-:Routine Task:-" << endl;
              addTask(routine_tasks);
              break;
            case 'b':
              cout << "\t\t\t\t-:College Task:-" << endl;
              addTask(college_tasks);
              break;
            case 'c':
              cout << "\t\t\t\t-:Extra Task:-" << endl;
              addTask(extra_tasks);
              break;
            case 'd':
              cout << "\t\t\t\t-:Hobbies:-" << endl;
              addTask(hobbies_tasks);
              break;
            case 'e':
              cout << "\t\t\t\t-:Extra Curricular:-" << endl;
              addTask(extra_curricular_tasks);
              break;
            case 'q':
              break;
            default:
              cout << "\t\tERROR! Invalid option..." << endl;
          }
        } while(op != 'q');
        break;
      }
      case 2: {
        char op;
        do {
          cout << endl;
          cout << "\t\t\t-:View Task Menu:-" << endl;
          cout << "\t\tx-----------------x----------x" << endl;
          cout << "\t\t|| a. Routine Task          ||" << endl;
          cout << "\t\t|| b. College Related Task  ||" << endl;
          cout << "\t\t|| c. Extra Task            ||" << endl;
          cout << "\t\t|| d. Hobbies               ||" << endl;
          cout << "\t\t|| e. Extra-curricular Task ||" << endl;
          cout << "\t\t|| q. Back Main Menu        ||" << endl;
          cout << "\t\tx-----------------x----------x" << endl;
          cout << endl;
          cout << "\t\tEnter choice: ";
          cin >> op;

          switch(op) {
            case 'a':
              cout << endl;
              cout << "\t\t\t\t\t\t-:Routine Task:-" << endl;
              viewTask(routine_tasks);
              break;
            case 'b':
              cout << endl;
              cout << "\t\t\t\t\t\t-:College Related Task:-" << endl;
              viewTask(college_tasks);
              break;
            case 'c':
              cout << endl;
              cout << "\t\t\t\t\t\t-:Extra Task:-" << endl;
              viewTask(extra_tasks);
              break;
            case 'd':
              cout << endl;
              cout << "\t\t\t\t\t\t-:Hobbies:-" << endl;
              viewTask(hobbies_tasks);
              break;
            case 'e':
              cout << endl;
              cout << "\t\t\t\t\t\t-:Extra-curricular:-" << endl;
              viewTask(extra_curricular_tasks);
              break;
            case 'q':
              break;
            default:
              cout << "\t\tERROR! Invalid option..." << endl;
          }
        } while(op != 'q');
        break;
      }
      case 3: {
        char op;
        do {
          cout << endl;
          cout << "\t\t\t-:Delete Task Menu:-" << endl;
          cout << "\t\tx-----------------x----------x" << endl;
          cout << "\t\t|| a. Routine Task          ||" << endl;
          cout << "\t\t|| b. College Related Task  ||" << endl;
          cout << "\t\t|| c. Extra Task            ||" << endl;
          cout << "\t\t|| d. Hobbies               ||" << endl;
          cout << "\t\t|| e. Extra-curricular Task ||" << endl;
          cout << "\t\t|| q. Back Main Menu        ||" << endl;
          cout << "\t\tx-----------------x----------x" << endl;
          cout << endl;
          cout << "\t\tEnter choice: ";
          cin >> op;

          switch(op) {
            case 'a':
              cout << "\t\t\t\t-:Routine Task:-" << endl;
              deleteTask(routine_tasks);
              break;
            case 'b':
              cout << "\t\t\t\t-:College Task:-" << endl;
              deleteTask(college_tasks);
              break;
            case 'c':
              cout << "\t\t\t\t-:Extra Task:-" << endl;
              deleteTask(extra_tasks);
              break;
            case 'd':
              cout << "\t\t\t\t-:Hobbies:-" << endl;
              deleteTask(hobbies_tasks);
              break;
            case 'e':
              cout << "\t\t\t\t-:Extra Curricular:-" << endl;
              deleteTask(extra_curricular_tasks);
              break;
            case 'q':
              break;
            default:
              cout << "\t\tERROR! Invalid option..." << endl;
          }
        } while(op != 'q');
        break;
      }
      case 4: {
        char op;
        do {
          cout << endl;
          cout << "\t\t\t-:Modify Task Menu:-" << endl;
          cout << "\t\tx-----------------x----------x" << endl;
          cout << "\t\t|| a. Routine Task          ||" << endl;
          cout << "\t\t|| b. College Related Task  ||" << endl;
          cout << "\t\t|| c. Extra Task            ||" << endl;
          cout << "\t\t|| d. Hobbies               ||" << endl;
          cout << "\t\t|| e. Extra-curricular Task ||" << endl;
          cout << "\t\t|| q. Back Main Menu        ||" << endl;
          cout << "\t\tx-----------------x----------x" << endl;
          cout << endl;
          cout << "\t\tEnter choice: ";
          cin >> op;

          switch(op) {
            case 'a':
              cout << "\t\t\t\t-:Routine Task:-" << endl;
              modifyTask(routine_tasks);
              break;
            case 'b':
              cout << "\t\t\t\t-:College Task:-" << endl;
              modifyTask(college_tasks);
              break;
            case 'c':
              cout << "\t\t\t\t-:Extra Task:-" << endl;
              modifyTask(extra_tasks);
              break;
            case 'd':
              cout << "\t\t\t\t-:Hobbies:-" << endl;
              modifyTask(hobbies_tasks);
              break;
            case 'e':
              cout << "\t\t\t\t-:Extra Curricular:-" << endl;
              modifyTask(extra_curricular_tasks);
              break;
            case 'q':
              break;
            default:
              cout << "\t\tERROR! Invalid option..." << endl;
          }
        } while(op != 'q');
        break;
      }
      case 5:
        cout << "\t\t\t-:Routine Task:-" << endl;
        generateReport(routine_tasks);
        cout << "\t\t\t-:College Related Task:-" << endl;
        generateReport(college_tasks);
        cout << "\t\t\t-:Extra Task:-" << endl;
        generateReport(extra_tasks);
        cout << "\t\t\t-:Hobbies:-" << endl;
        generateReport(hobbies_tasks);
        cout << "\t\t\t-:Extra curricular:-" << endl;
        generateReport(extra_curricular_tasks);
        break;
      case 6:
        cout << "Exiting program..." << endl;
        break;
      default:
        cout << "ERROR! Invalid choice..." << endl;
    }
  } while(choice != 6);
  cout << endl;
  byeMessage();
  return 0;
}
