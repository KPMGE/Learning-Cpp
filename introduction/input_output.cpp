//Basic input and output in C++ language

#include <iostream>

//OBS: if we don't declare it, we must to use 'std::cout' and 'std::cin'
using namespace std;

int main(void)
{
    //declaring variables
    int number;
    char character;

    //showing message on sreen
    cout << "Type a number and a character: ";

    //reading values
    cin >> number >> character; 

    //showing results
    cout << "The number is: " << number << endl << "and the character is: " << character;

    //ObS: the 'endl' creates a new line
    return 0;
}
