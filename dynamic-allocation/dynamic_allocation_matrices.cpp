//Example of dynamic allocation in C++ programming language

#include <iostream>
using namespace std;

int** read_matrix(int row, int column);
void print_matrix(int** matrix, int row, int column);

int main(void)
{
    int row, column;
    int** allocatedMatrix;

    cout << "Enter the amount of rows and columns to matrix: ";
    cin >> row >> column;

    //allocating matrix and showing it 
    allocatedMatrix = read_matrix(row, column);
    print_matrix(allocatedMatrix, row, column);

    //releasing allocated memory
    for(int i = 0; i < row; i++)
        free(allocatedMatrix[i]);
    free(allocatedMatrix);

    return 0;
}

int** read_matrix(int row, int column)
{
    int** matrix;

    //allocating matrix
    matrix = new int*[row];
    for(int i = 0; i < column; i++)
        matrix[i] = new int[row];

    //reading matrix
    cout << "Enter matrix: " << endl;
    for(int i = 0; i < row; i++)
        for(int j = 0; j < column; j++)
            cin >> matrix[i][j];

    return matrix;
}

void print_matrix(int** matrix, int row, int column)
{
    cout << "Your matrix is: " << endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
}
