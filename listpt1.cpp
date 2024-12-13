#include <iostream>
#include "student.h"
#include "node.h"

using namespace std;

void add(Node*& head, Student* student) {
    Node* current = head;
    
    if (current == NULL) {
        head = new Node(student);  // Create the first node if the list is empty (NULL)
        head->setStudent(student);  // Set the student in the new node
    } else {
        while (current->getNext() != NULL) {
            current = current->getNext();  //Go to the last node
        }
        current->setNext(new Node(student));  // Add the new node to the end of the list
        current->getNext()->setStudent(student);  // Set the student in the new node
    }
}

//prints the node 

void print(Node* head) {
    Node* current = head;
    while (current != NULL) {
        
        cout << "Student: " << current->getStudent()->getFirstName() << " "
             << current->getStudent()->getLastName() << endl;
        cout << "ID: " << current->getStudent()->getStudentId() << endl;
        cout << "GPA: " << current->getStudent()->getGPA() << endl << endl;
        
        current = current->getNext();  
    }
}

int main() {
    Node* head = NULL; 
   Student* student1 = new Student("Aleena", "Shaik", 509453, 5.0);
    Student* student2 = new Student("Katie", "Chen", 402823, 1.2);
    Student* student3 = new Student("Someone", "Someone", 10001, 3.8);
    
    add(head, student1);
    add(head, student2);
    add(head, student3);
    print(head);

   

    return 0;
}
