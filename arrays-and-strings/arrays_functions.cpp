#include <iostream>
using namespace std;

void display_matrix(int matrix[][3]);

int main(void)
{
    int matrix[3][3];

    //reading matrix
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout << "Enter the element" << "[" << i << "]" << "[" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    //displaying matrix with a function
    display_matrix(matrix);

    return 0;
}

void display_matrix(int matrix[][3])
{
    cout << "Your matrix is: " << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << endl << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
