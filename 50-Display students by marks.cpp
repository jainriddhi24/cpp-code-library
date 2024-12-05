// WAP to display the list of students according to their marks.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    int marks;
};

bool compareByMarks(const Student& a, const Student& b) {
    return a.marks > b.marks;
}

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    vector<Student> students(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter name and marks of student " << i + 1 << ": ";
        cin >> students[i].name >> students[i].marks;
    }

    sort(students.begin(), students.end(), compareByMarks);

    cout << "\nStudents sorted by marks:\n";
    for (size_t i = 0; i < students.size(); i++) {
        cout << students[i].name << " - " << students[i].marks << endl;
    }

    return 0;
}

