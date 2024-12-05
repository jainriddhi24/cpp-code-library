//WAP to enter a decimal number. Calculate and display the binary equivalent of the number...

#include <iostream>
#include <sstream> 
#include <string>
using namespace std;

string intToString(int num) {
    stringstream ss;
    ss << num;
    return ss.str();
}

int main() {
    int d, r;
    string b = ""; 
    cout << "Enter a decimal number: ";
    cin >> d;
    int n = d; 
    while(d > 0) {
        r = d % 2;                  // Find the remainder (binary digit)
        b = intToString(r) + b;      // Prepend the binary digit to the result string
        d = d / 2;                   // Divide the decimal number by 2
    }
    cout << "The binary equivalent of " << n << " is: " << b << endl;

    return 0;
}

