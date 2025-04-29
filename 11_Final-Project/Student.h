// Student.cpp
#include <iostream>
#include "Student.h"
using namespace std;

Student::Student() {
    rollNo = 0;
    name = "";
    for (int i = 0; i < 5; i++) marks[i] = 0;
    percentage = 0;
    grade = 'F';
}

Student::Student(int r, string n, float m[]) {
    rollNo = r;
    name = n;
    float total = 0;
    for (int i = 0; i < 5; i++) {
        marks[i] = m[i];
        total += m[i];
    }
    percentage = total / 5;
    calculateGrade();
}

Student::~Student() {
    cout << "Destructor called for: " << name << endl;
}

void Student::calculateGrade() {
    if (percentage >= 90) grade = 'A';
    else if (percentage >= 80) grade = 'B';
    else if (percentage >= 70) grade = 'C';
    else if (percentage >= 60) grade = 'D';
    else grade = 'F';
}

void Student::display() {
    cout << "Roll No: " << rollNo << "\nName: " << name
         << "\nPercentage: " << percentage << "%\nGrade: " << grade << endl;
}

int Student::getRollNo() {
    return rollNo;
}

string Student::getName() {
    return name;
}



