// WAP to enter a rational number, simplify and display it.
#include <iostream>
using namespace std;
// Function to calculate the greatest common divisor (GCD) using Euclid's algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void simplifyRational(int& numerator, int& denominator) {
    int divisor = gcd(numerator, denominator);
    numerator /= divisor;
    denominator /= divisor;

    if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }
}

int main() {
    int numerator, denominator;

    cout << "Enter the numerator: ";
    cin >> numerator;

    cout << "Enter the denominator: ";
    cin >> denominator;

    if (denominator == 0) {
        cout << "Error: Denominator cannot be zero!" << endl;
        return 1;
    }

    simplifyRational(numerator, denominator);

    cout << "Simplified Rational Number: " << numerator;
    if (denominator != 1) {
        cout << "/" << denominator;
    }
    cout << endl;

    return 0;
}

