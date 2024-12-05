//WAP a c++ program to implement the concept of mutli level inheritance...

#include <iostream>
using namespace std;

// Base class 1
class Base1 {
protected:
    int m; // Variable for Base1
public:
    void get_m(int x) {
        m = x;
    }
};

// Base class 2
class Base2 {
protected:
    int n; // Variable for Base2
public:
    void get_n(int y) {
        n = y;
    }
};

// Derived class (inherits from Base1 and Base2)
class Derived : public Base1, public Base2 {
public:
    void display() {
        cout << "M: " << m << endl;
        cout << "N: " << n << endl;
        cout << "Product of M and N: " << m * n << endl;
    }
};

int main() {
    Derived d;
    d.get_m(10); // Set value for m
    d.get_n(80); // Set value for n
    d.display(); // Display values and their product
    return 0;
}

