//
// Created by m3ped on 16/11/2022.
//

#ifndef UNTITLED2_STUDENT_H
#define UNTITLED2_STUDENT_H

#include <string>
using namespace std;

class Student {
    string name;
    int age;
public:
    Student(const string &name, int age);
    const string &getName() const;
    int getAge() const;

};


#endif //UNTITLED2_STUDENT_H
