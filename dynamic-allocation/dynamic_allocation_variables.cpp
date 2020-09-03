#include <iostream>
using namespace std;

int main(void) 
{
    // declare an int pointer
    int* pointInt;

    // declare a float pointer
    float* pointFloat;

    // dynamically allocate memory
    pointInt = new int;
    pointFloat = new float;

    // assigning value to the memory
    *pointInt = 45;
    *pointFloat = 45.45f;

    //print values of the pointers
    cout << *pointInt << endl;
    cout << *pointFloat << endl;

    // deallocate the memory
    delete pointInt, pointFloat;

    return 0;
}
