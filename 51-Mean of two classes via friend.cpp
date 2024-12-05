// Wap to find a mean of 2 numbers belonging to two different classes using friend function.
#include <iostream>
using namespace std;

class ClassA;

class ClassB {
private:
    int numB;

public:
    ClassB(int b) : numB(b) {}

    friend float findMean(const ClassA& a, const ClassB& b); 
};

class ClassA {
private:
    int numA;

public:
    ClassA(int a) : numA(a) {}

    friend float findMean(const ClassA& a, const ClassB& b); 
};

float findMean(const ClassA& a, const ClassB& b) {
    return (a.numA + b.numB) / 2.0;
}

int main() {
    ClassA objA(10); 
    ClassB objB(20);

    cout << "The mean of the two numbers is: " << findMean(objA, objB) << endl;

    return 0;
}

