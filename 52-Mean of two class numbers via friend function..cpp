// WAP to add 2 arrays using friend function and operator overloading.
#include <iostream>
using namespace std;

class Array {
private:
    int arr[5];

public:
    Array(int values[]) {
        for (int i = 0; i < 5; i++) {
            arr[i] = values[i];
        }
    }

    friend Array operator+(const Array& a1, const Array& a2);

    void display() const {
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

Array operator+(const Array& a1, const Array& a2) {
    int result[5];
    for (int i = 0; i < 5; i++) {
        result[i] = a1.arr[i] + a2.arr[i];
    }
    return Array(result);
}

int main() {
    int values1[5] = {1, 2, 3, 4, 5};
    int values2[5] = {6, 7, 8, 9, 10};

    Array a1(values1), a2(values2);

    Array sum = a1 + a2;

    cout << "Array 1: ";
    a1.display();

    cout << "Array 2: ";
    a2.display();

    cout << "Sum of Arrays: ";
    sum.display();

    return 0;
}

