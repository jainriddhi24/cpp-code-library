// WAP using pointer to structure to intialize the members in the structure.
#include <iostream>
using namespace std;

struct Student {
    int rollNumber;
    string name;
    float marks;
};

int main() {
    Student student;
    Student* ptr = &student;

    ptr->rollNumber = 1;
    ptr->name = "Yaana";
    ptr->marks = 95.5;

    cout << "Roll Number: " << ptr->rollNumber << endl;
    cout << "Name: " << ptr->name << endl;
    cout << "Marks: " << ptr->marks << endl;

    return 0;
}

