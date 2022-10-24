//
// Created by Andrey Sam on 10/17/2022.
//

#ifndef NODOS_Y_LISTAS_STUDENTNODE_H
#define NODOS_Y_LISTAS_STUDENTNODE_H


#include "../Student/Student.h"

class StudentNode {
private:
    StudentNode *next;
    Student student;
public:


    StudentNode(Student);

    StudentNode *getNext() const;

    void setNext(StudentNode *next);

    const Student &getStudent() const;

    void setStudent(const Student &student);


};


#endif //NODOS_Y_LISTAS_STUDENTNODE_H
