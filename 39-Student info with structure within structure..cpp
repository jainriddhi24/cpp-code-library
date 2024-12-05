// WAP to read and display information of a student using structure within a structure.
#include <iostream>
#include <string>
using namespace std;
struct Address {
    string street;
    string city;
    string state;
    int pincode;
};
struct Student {
    string name;
    int rollNumber;
    float marks;
    Address address;
};

int main() {
    Student student;
    cout << "Enter student name: ";
    getline(cin, student.name);
    cout << "Enter roll number: ";
    cin >> student.rollNumber;
    cout << "Enter marks: ";
    cin >> student.marks;
    cin.ignore(); 
    cout << "Enter street: ";
    getline(cin, student.address.street);
    cout << "Enter city: ";
    getline(cin, student.address.city);
    cout << "Enter state: ";
    getline(cin, student.address.state);
    cout << "Enter pincode: ";
    cin >> student.address.pincode;
    cout << "\n--- Student Information ---" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Roll Number: " << student.rollNumber << endl;
    cout << "Marks: " << student.marks << endl;
    cout << "Address: " << student.address.street << ", " 
         << student.address.city << ", " << student.address.state 
         << " - " << student.address.pincode << endl;

    return 0;
}

