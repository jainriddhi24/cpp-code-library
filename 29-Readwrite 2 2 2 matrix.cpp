// WAP to read and write a 2*2*2 matrix.
#include <iostream>
using namespace std;

void printMatrix(int matrix[2][2][2]) {
    for (int i = 0; i < 2; ++i) {
        cout << "Slice " << i + 1 << ":\n";
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 2; ++k) {
                cout << matrix[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}

void transpose(int matrix[2][2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = j + 1; k < 2; ++k) {
                swap(matrix[i][j][k], matrix[i][k][j]);
            }
        }
    }
}

int main() {
    int matrix[2][2][2] = {
        {{1, 2}, {3, 4}},
        {{5, 6}, {7, 8}}
    };

    cout << "Original Matrix:\n";
    printMatrix(matrix);

    transpose(matrix);

    cout << "Transposed Matrix:\n";
    printMatrix(matrix);

    return 0;
}

