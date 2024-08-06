#include <iostream>

using namespace std;
class matrix{
    private:
    int mat[3][3] ;

   public:
   matrix(){}

   matrix(){
    for (int i = 0; i < 3; i++)
    {for (int j = 0; j < 3; ++j)
    {
        mat[i][j]=0;
        
    } 
    }
   }


// Function to input matrix elements
    void inputMatrix() {
        cout << "Enter elements of the matrix (3x3):" << endl;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cin >> mat[i][j];
            }
        }
    }


     // Overload + operator to add two matrices
    matrix operator+(const matrix& other) {
        matrix result;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                result.mat[i][j] = this->mat[i][j] + other.mat[i][j];
            }
        }
        return result;
    }

  // Function to display matrix elements
    void display() const {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    matrix matrix1, matrix2, sumMatrix;

    cout << "Input first matrix:" << endl;
    matrix1.inputMatrix();

    cout << "Input second matrix:" << endl;
    matrix2.inputMatrix();

    // Add two matrices using overloaded + operator
    sumMatrix = matrix1 + matrix2;

    // Display the result
    cout << "Sum of the two 3x3 matrices is:" << endl;
    sumMatrix.display();

    return 0;
}