#include <iostream>
#include "student.h"
#include <cstring>  

using namespace std; 


//Constructor of the Student class and storing info into new variables 

//Something new I learned is const. Since we are testing the functionality of the Node we are using contents that are no being modified 
Student::Student(const char* newFirstName, const char* newLastName, int newId, float newGpa) {
    strcpy(firstName, newFirstName);
    strcpy(lastName, newLastName);
    id = newId;
    gpa = newGpa;
}

// initializing functions to return values when called in main
char* Student::getFirstName() {
    return firstName;
}


char* Student::getLastName() {
    return lastName;
}


int Student::getStudentId() {
    return id;
}


float Student::getGPA() {
    return gpa;
}
