// WAP to illustrate the use of arrays within structure.
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int marks[5]; 
    float average;
};

int main() {
    Student s1; 
    int total = 0;

    cout << "Enter student's name: ";
    getline(cin, s1.name);

    cout << "Enter marks for 5 subjects: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> s1.marks[i];
        total += s1.marks[i];
    }
    cout << "Total: " << total << endl;
    // Calculate average
    s1.average = total / 5.0;
    // Display student details
    cout << "\nStudent Details:" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Marks: ";
    for (int i = 0; i < 5; i++) {
        cout << s1.marks[i] << " ";
    }
    cout << "\nAverage: " << s1.average << endl;

    return 0;
}

