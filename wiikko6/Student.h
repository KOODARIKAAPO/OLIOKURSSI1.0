#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<string>
using namespace std;


class Student{

private:
    string name;
    int age;

public:
    Student(string, int);
    void setAge (int);
    string getName() const;
    int getAge()const;
    void printStudentInfo()const;
};
#endif // STUDENT_H
