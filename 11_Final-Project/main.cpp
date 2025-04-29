// main.cpp
#include <iostream>
#include <vector>
#include "Student.h"
using namespace std;

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\n====== Student Report Card Management ======\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by Roll No\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            int roll;
            string name;
            float marks[5];
            cout << "Enter Roll No: ";
            cin >> roll;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter marks for 5 subjects:\n";
            for (int i = 0; i < 5; i++) {
                cout << "Subject " << i+1 << ": ";
                cin >> marks[i];
            }
            Student s(roll, name, marks);
            students.push_back(s);
            cout << "Student added successfully.\n";
        }

        else if (choice == 2) {
            if (students.empty()) {
                cout << "No student records found.\n";
            } else {
                for (auto& s : students) {
                    s.display();
                    cout << "------------------------\n";
                }
            }
        }

        else if (choice == 3) {
            int roll;
            cout << "Enter Roll No to search: ";
            cin >> roll;
            bool found = false;
            for (auto& s : students) {
                if (s.getRollNo() == roll) {
                    s.display();
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Student not found.\n";
        }

        else if (choice == 4) {
            cout << "Exiting program. Goodbye!\n";
        }

        else {
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
