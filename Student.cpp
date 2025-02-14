#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(string name, int age) : name(name), age(age) {}

void Student::printStudentInfo() const {  // <-- HUOM! const
    cout << "Name: " << name << ", Age: " << age << endl;
}

int Student::getAge() const {  // <-- HUOM! const
    return age;
}

string Student::getName() const {  // <-- HUOM! const
    return name;
}
