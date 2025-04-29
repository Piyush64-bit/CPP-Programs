// Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks[5];
    float percentage;
    char grade;

public:
    Student();
    Student(int r, string n, float m[]);
    ~Student();

    void calculateGrade();
    int getRollNo();
    string getName();
    void display();
};

#endif
