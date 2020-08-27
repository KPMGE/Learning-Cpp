#include <iostream>

using namespace std;

int main(void)
{
    //declaring a and b as constants
    const int a = 10;
    const int b = 2;
    const double c = 3;

    //Arithmetic operators
    //OBS: The % operator can only be used with integers.

    cout << "Arithmetic operators" << endl << endl;
    cout << "a is: " << a << endl << "b is: " << b  << endl << "c is: " << c << endl << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;
    cout << "a / c = " << (a / c) << endl;
    cout << "a / int(c) = " << (a / int(c)) << endl << endl;
    
    //Increment and decrement operators
    int i = 3;

    cout << "Increment and decrement operators" << endl;
    cout << "i = " << i << endl << endl;
    cout << "i++ or ++i = " << (i++) << endl;
    cout << "i-- or --i = " << (i--) << endl << endl;

    //Assignment operators
    int n = 5, m = 3;

    cout << "Assignment operators" << endl << endl; 
    cout << "n = " << n << endl << "m = " << m << endl;
    cout << "n += m = " << (n += m) << endl;
    cout << "n -= m = " << (n -= m) << endl;
    cout << "n *= m = " << (n *= m) << endl;
    cout << "n /= m = " << (n /= m) << endl;
    cout << "n %= m = " << (n %= m) << endl << endl;


    //Relational operators
    cout << "Relational operators" << endl;
    cout << "a is: " << a << endl << "b is: " << b << endl << endl;
    cout << "(a == b) = " << (a == b) << endl;
    cout << "(a != b) = " << (a != b) << endl;
    cout << "(a < b) = " << (a < b) << endl;
    cout << "(a > b) = " << (a > b) << endl;
    cout << "(a <= b) = " << (a <= b) << endl;
    cout << "(a >= b) = " << (a >= b) << endl << endl;

    //Logical operators
    bool result;

    cout << "Logical operators" << endl;
    cout << "a is: " << a << endl << "b is: " << b << endl << endl;

    result = ((a >= b) && (a == b));
    cout << "(a >= b) && (a == b) = " << result << endl;

    result = !((a >= b) && (a == b));
    cout << "!((a >= b) && (a == b)) = " << result << endl;

    result = ((a >= b) || (a == b));
    cout << "(a >= b) || (a == b) = " << result << endl;

    return 0;
}
