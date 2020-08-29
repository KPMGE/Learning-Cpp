// Factorial of n = 1*2*3*...*n

#include <iostream>
using namespace std;

int factorial(int);

int main() {
    int number, result;

    cout << "Enter a non-negative number: ";
    cin >> number;

    result = factorial(number);
    cout << "Factorial of " << number << " = " << result;

    return 0;
}

int factorial(int number) {
    if (number > 1) 
        return number * factorial(number - 1);
    else 
        return 1;
}
