// WAP to add 2 vectors (arrays)....
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the vectors: ";
    cin >> size;

    vector<int> vector1(size), vector2(size), result(size);
    cout << "Enter elements of the first vector:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> vector1[i];
    }
    cout << "Enter elements of the second vector:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> vector2[i];
    }

    for (int i = 0; i < size; ++i) {
        result[i] = vector1[i] + vector2[i];
    }

    cout << "Resultant vector after addition:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
