// WAP to demonstrate the concept function overloading in the member function of a class.
#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    int add(int a, int b, int c) {
        return a + b + c;
    }
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;
    cout << "Sum of 2 and 3 (int): " << calc.add(2, 3) << endl;
    cout << "Sum of 1, 2, and 3 (int): " << calc.add(1, 2, 3) << endl;
    cout << "Sum of 4.5 and 5.5 (double): " << calc.add(4.5, 5.5) << endl;

    return 0;
}

