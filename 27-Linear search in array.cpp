// WAP to implement linear search in any given array.
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int size, target;
    
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the element to search for: ";
    cin >> target;
    
    int result = linearSearch(arr, size, target);
    
    if (result == -1) {
        cout << "Element not found in the array." << endl;
    } else {
        cout << "Element found at index " << result << "." << endl;
    }
    
    return 0;
}
