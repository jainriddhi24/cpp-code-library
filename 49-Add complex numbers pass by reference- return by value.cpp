// WAP that add 2 complex numbers. the object must be passed through preferences and the result must be passed by value.
#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double r = 0, double i = 0) : real(r), imaginary(i) {}
    Complex add(const Complex& other) {
        Complex result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result; 
    }

    void display() const {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    double r1, i1, r2, i2;

    cout << "Enter real and imaginary parts of the first complex number: ";
    cin >> r1 >> i1;
    Complex c1(r1, i1);

    cout << "Enter real and imaginary parts of the second complex number: ";
    cin >> r2 >> i2;
    Complex c2(r2, i2);

    Complex result = c1.add(c2);

    cout << "The sum of the two complex numbers is: ";
    result.display();

    return 0;
}

