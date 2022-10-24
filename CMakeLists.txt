cmake_minimum_required(VERSION 3.23)
project(Nodos_y_listas)

set(CMAKE_CXX_STANDARD 23)

add_executable(Nodos_y_listas main.cpp Student/Student.cpp Student/Student.h Node/StudentNode.cpp Node/StudentNode.h List/StudentList.cpp List/StudentList.h)
