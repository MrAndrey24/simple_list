//
// Created by Andrey Sam on 10/17/2022.
//

#ifndef NODOS_Y_LISTAS_STUDENTLIST_H
#define NODOS_Y_LISTAS_STUDENTLIST_H


#include "../Node/StudentNode.h"
#include <string>

class StudentList {
private:
    StudentNode *head;


public:
    StudentList(void);

    void addStudent(Student);

    void runList(void);


};


#endif //NODOS_Y_LISTAS_STUDENTLIST_H
