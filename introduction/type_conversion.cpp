//Samples of type conversion in C++ language
//OBS: when we convert of a larger type to a smaller type, we loss data

#include <iostream>

using namespace std;

int main(void)
{
    int numberInt;
    double numberDouble = 10.313;

    cout << "Number double is: " << numberDouble << endl;

    //automatic conversion, losing the decimal part
    numberInt = numberDouble;

    //explicit conversion
    numberInt = (double)numberDouble;

    //explicit conversion 2
    numberInt = double(numberDouble);

    cout << "Number int is: " << numberInt;

    return 0;
}
