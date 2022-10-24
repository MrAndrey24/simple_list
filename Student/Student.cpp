//
// Created by Andrey Sam on 10/17/2022.
//
#include <string>
#include <ios>
#include <sstream>

using namespace std;

#include "Student.h"


string Student::toString() const {
    return "Name: " + getName() + " " + "Career: " + getCareer() + " " +
           "Age: " + to_string(getAge());
}

const string &Student::getName() const {
    return Name;
}

void Student::setName(const string &name) {
    Name = name;
}

const string &Student::getCareer() const {
    return Career;
}

void Student::setCareer(const string &career) {
    Career = career;
}

int Student::getAge() const {
    return Age;
}

void Student::setAge(int age) {
    Age = age;
}



