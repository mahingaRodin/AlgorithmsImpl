#include <iostream>
using namespace std;

// Define the Student class
class Student {
public:
    int id;         // Unique ID for the student
    int age;        // Age of the student
    string name;    // Name of the student
    Student* next;  // Pointer to the next student in the linked list

    // Constructor to initialize a student object
    Student(int id, int age, string name) {
        this->id = id;
        this->age = age;
        this->name = name;
        this->next = nullptr; // Initialize the next pointer to null
    }
};

// Function to display the details of all students in the linked list
void display(Student* head) {
    // Traverse through the list until reaching the end
    while (head != nullptr) {
        // Print the current student's details
        cout << "ID: " << head->id << ", Name: " << head->name << ", Age: " << head->age << endl;
        head = head->next; // Move to the next student
    }
}

int main() {
    // Create the first student as a stack object
    Student n1(1, 17, "Rodin");
    Student n2(2, 18, "Patrick");

    // Link the first student to the second student
    n1.next = &n2;

    // Set the head pointer to the start of the list
    Student* head = &n1;

    // Dynamically create the third and fourth students
    Student* n3 = new Student(3, 19, "James");
    Student* n4 = new Student(4, 20, "Joseph");

    // Link the second student to the third, and the third to the fourth
    n2.next = n3;
    n3->next = n4;

    // Display the linked list of students
    display(head);
    return 0; 
}
