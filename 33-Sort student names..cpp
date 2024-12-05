// WAP to sort names of students...
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of students.\n";
        return 0;
    }

    vector<string> names(n);
    cin.ignore(); 

    cout << "Enter the names of students:\n";
    for (int i = 0; i < n; ++i) {
        getline(cin, names[i]);
    }

    sort(names.begin(), names.end());

    cout << "\nSorted names of students:\n";
    for (int i = 0; i < n; ++i) {
        cout << names[i] << "\n";
    }

    return 0;
}

