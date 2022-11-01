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

    Student Nazira;
    Nazira.setName("Nazira");
    Nazira.setCareer("Pilot");
    Nazira.setAge(46);

    Student Heidy;
    Heidy.setName("Heidy");
    Heidy.setCareer("Computer Engineer");
    Heidy.setAge(36);

    Student Eliecer;
    Eliecer.setName("Eliecer");
    Eliecer.setCareer("Police officer");
    Eliecer.setAge(24);

    list->addStudent(andrey);
    list->addStudent(carlos);
    list->addStudent(maryangel);
    list->addStudent(Nazira);
    list->addStudent(Heidy);
    list->addStudent(Eliecer);
    list->runList();


    return 0;
}
