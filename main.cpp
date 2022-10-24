#include <iostream>
#include <string>
#include "List/StudentList.h"

using namespace std;

int main() {
    StudentList *list = new StudentList();
    Student andrey;
    andrey.setName("Andrey");
    andrey.setCareer("Software Engineer");
    andrey.setAge(19);

    Student carlos;
    carlos.setName("Carlos");
    carlos.setCareer("Soccer Player");
    carlos.setAge(20);

    Student maryangel;
    maryangel.setName("Maryangel");
    maryangel.setCareer("Computer Engineer");
    maryangel.setAge(30);

    list->addStudent(andrey);
    list->addStudent(carlos);
    list->addStudent(maryangel);
    list->runList();


    return 0;
}
