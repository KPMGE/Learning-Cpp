//Simple calculator using the 'switch' statement

#include <iostream>

using namespace std;

int main(void)
{
    char oper;
    float number1, number2;

    cout << "Enter a operator: ";
    cin >> oper;
    cout << "Enter two numbers: ";
    cin >> number1 >> number2;

    switch(oper)
    {
        case '+':
            cout << number1 << " + " << number2 << " = " << (number1 + number2);
            break;
        case '-':
            cout << number1 << " - " << number2 << " = " << (number1 - number2);
            break;
        case '*':
            cout << number1 << " * " << number2 << " = " << (number1 * number2);
            break;
        case '/':
            cout << number1 << " / " << number2 << " = " << (number1 / number2);
            break;
        default:
            cout << "Invalid operator";
    }

    return 0;
}
