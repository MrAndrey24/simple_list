//
// Created by Andrey Sam on 10/17/2022.
//

#include "StudentList.h"
#include <iostream>

using namespace std;

StudentList::StudentList() {
    head = NULL;
}

void StudentList::addStudent(Student student) {
    StudentNode *node = new StudentNode(student);
    if (head == NULL) {
        head = node;
    } else {
        StudentNode *AUX = head;
        while (AUX->getNext() != NULL) {
            AUX = AUX->getNext();
        }
        node->setBefore(AUX);
        AUX->setNext(node);
    }
}

void StudentList::runList() {
    StudentNode *AUX = head;

    if (head == NULL) {
        throw std::runtime_error("Empty StudentList");
    }
    while (AUX != NULL) {
        cout << "\n" << AUX->getStudent().toString() << endl;
        AUX = AUX->getNext();
    }

    cout << "\n" << endl;
    cout << "End of list" << endl;
}




