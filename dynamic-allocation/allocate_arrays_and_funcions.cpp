#include <iostream>
using namespace std;

//function that creates and returns a dinamically allocated array
float* createArray(int n);

int main(void)
{
    int size;
    float* arrayAllocated;

    //getting the array's size
    cout << "Enter size for array: ";
    cin >> size;

    //allocating an array with the function
    arrayAllocated = createArray(size);

    //displaying array
    cout << endl << "Your array is:" << endl;
    for(int i = 0; i < size; i++)
        cout << arrayAllocated[i] << endl;

    //releasing memory allocated
    delete [] arrayAllocated;
    
    return 0;
}

float* createArray(int n)
{
    //pointer to array
    float* arrayCreated;

    //allocating array dynamically
    arrayCreated = new float[n];

    //reading array
    for(int i = 0; i < n; i++)
    {
        cout << "Enter element" << i+1 << ": ";
        cin >> arrayCreated[i];
    }

    //returning array
    return arrayCreated;
}
