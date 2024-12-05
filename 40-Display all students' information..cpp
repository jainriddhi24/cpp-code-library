//WAP to read and display information of all students in the class.
#include <iostream>
#include <string>
using namespace std;
struct Address {
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
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    Student students[n];
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":" << endl;

        cin.ignore(); // Clear input buffer
        cout << "Enter name: ";
        getline(cin, students[i].name);

        cout << "Enter roll number: ";
        cin >> students[i].rollNumber;

        cout << "Enter marks: ";
        cin >> students[i].marks;

        cin.ignore();
        cout << "Enter state: ";
        getline(cin, students[i].address.state);
        cout << "Enter pincode: ";
        cin >> students[i].address.pincode;
    }
    cout << "\n--- Student Information ---" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":" << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Roll Number: " << students[i].rollNumber << endl;
        cout << "Marks: " << students[i].marks << endl;
        cout << "Address: " << students[i].address.state
             << " - " << students[i].address.pincode << endl;
    }

    return 0;
}

