#include <iostream>
using namespace std;

// Global variable
int num;

// Function declaration
int& test();

int main(void)
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    //assignment for reference
    test() = number;

    cout << "Number = " << num;

    return 0;
}

int& test()
{
    return num;
}
