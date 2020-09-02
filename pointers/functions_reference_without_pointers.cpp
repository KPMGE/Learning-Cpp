#include <iostream>
using namespace std;

// function definition to swap values
void swap(int &n1, int &n2) 
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int main(void)
{

    // initialize variables
    int a = 1, b = 2;

    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // call function to swap numbers
    swap(a, b);

    cout << "\nAfter swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
