// WAP to copy a given string into a new string. memory for the new string must be allocated dynamically...
#include <iostream>
#include <cstring> // For strcpy
using namespace std;

int main() {
    char original[100], *copy;
    cout << "Enter a string: ";
    cin.getline(original, 100);

    copy = new char[strlen(original) + 1]; 

    strcpy(copy, original);

    cout << "Original string: " << original << endl;
    cout << "Copied string: " << copy << endl;

    delete[] copy;

    return 0;
}
