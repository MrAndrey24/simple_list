//
// Created by Andrey Sam on 10/17/2022.
//

#include "StudentNode.h"

StudentNode::StudentNode(Student student) {
    this->student = student;
    next = NULL;
}

StudentNode *StudentNode::getNext() const {
    return next;
}

void StudentNode::setNext(StudentNode *next) {
    StudentNode::next = next;
}

const Student &StudentNode::getStudent() const {
    return student;
}

void StudentNode::setStudent(const Student &student) {
    StudentNode::student = student;
}

