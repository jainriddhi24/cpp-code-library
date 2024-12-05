// WAP to add 2 integers using pointer.....
#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2;
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    ptr1 = &num1;
    ptr2 = &num2;
    sum = *ptr1 + *ptr2;

    cout << "The sum of " << *ptr1 << " and " << *ptr2 << " is: " << sum << endl;

    return 0;
}

