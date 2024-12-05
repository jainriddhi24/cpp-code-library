//WAP to read, display, add and subtract 2 complex numbers.
#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void display() const {
        cout << real;
        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";
        cout << endl;
    }

    Complex add(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    Complex subtract(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }
};

int main() {
    Complex c1, c2, sum, diff;
    cout << "Enter the first complex number:" << endl;
    c1.input();
    cout << "Enter the second complex number:" << endl;
    c2.input();

    sum = c1.add(c2);
    diff = c1.subtract(c2);

    cout << "First complex number: ";
    c1.display();
    cout << "Second complex number: ";
    c2.display();
    cout << "Sum: ";
    sum.display();
    cout << "Difference: ";
    diff.display();

    return 0;
}
