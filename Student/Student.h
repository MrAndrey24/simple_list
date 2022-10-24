//
// Created by Andrey Sam on 10/17/2022.
//
#include <string>

using namespace std;
#ifndef NODOS_Y_LISTAS_STUDENT_H
#define NODOS_Y_LISTAS_STUDENT_H


class Student {
private:

    string Name;
    string Career;
    int Age;

public:

    const string &getName() const;

    void setName(const string &name);

    const string &getCareer() const;

    void setCareer(const string &career);

    int getAge() const;

    void setAge(int age);

    string toString() const;


};


#endif //NODOS_Y_LISTAS_STUDENT_H
