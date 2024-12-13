#ifndef STUDENT_H
#define STUDENT_H
#include <cstring>  
class Student {
public:

// initializing variables 
    char firstName[100];   
    char lastName[100];    
    int id;         
    float gpa;          

    // Constructor to initialize a student with details
    Student(const char* firstName, const char* lastName, int id, float gpa);
    // Getters for variables
    char* getFirstName();
    char* getLastName();
    int getStudentId();
    float getGPA();
};

#endif
