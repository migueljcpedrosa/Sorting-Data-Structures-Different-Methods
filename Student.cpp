//
// Created by m3ped on 16/11/2022.
//

#include "Student.h"

const string &Student::getName() const {
    return name;
}

int Student::getAge() const {
    return age;
}

Student::Student(const string &name, int age) : name(name), age(age) {}
