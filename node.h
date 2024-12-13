#ifndef NODE_H //header guard 
#define NODE_H
#include "student.h"
#include <iostream>
#include <cstring>

using namespace std;

class Node {
public:
    Student* student;   //pointer to student object 
    Node* next;        // pointer to the next node in the list 
    //Constructor 
    Node(Student* newStudent);
    //Destructor 
    ~Node();
    //Setter and Getters for Student functions
    void setStudent(Student* newStudent);
    Student* getStudent();
    void setNext(Node* newNext);
    Node* getNext();
};

#endif
