// WAP that uses an overloaded constructor to dynamically allocate memory to an array and thus find the largest of it element.
#include <iostream>
using namespace std;

class Array {
private:
    int* arr;  // Pointer for dynamic array
    int size;

public:
    Array(int n) : size(n) {
        arr = new int[size];
        cout << "Enter " << size << " elements:" << endl;
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }
    int findLargest() {
        int largest = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] > largest) {
                largest = arr[i];
            }
        }
        return largest;
    }

    // Destructor to deallocate memory
    ~Array() {
        delete[] arr;
    }
};

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    Array array(n); 

    cout << "The largest element is: " << array.findLargest() << endl;

    return 0;
}

