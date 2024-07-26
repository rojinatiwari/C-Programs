#include <iostream>

using namespace std;

int main() {
    // Initialize two 3x3 matrices
    int matrix1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrix2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    // Initialize a matrix to store the sum
    int sum[3][3];

    // Calculate the sum of the two matrices
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Output the resulting matrix
    cout << "Sum of the two 3x3 matrices is: " << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}