//Sample with else, else if, else and ternary operator

#include <iostream>

using namespace std;

int main(void)
{
    int number;
    bool isZero;

    cout << "Type an integer number: ";
    cin >> number;

    //if number is 0, 1 else, 0
    isZero = (number == 0) ? 1 : 0;

    if(number != 0)
    {
        if((number % 2) == 0)
        {
            cout << "The number digited is even" << endl;
            if(number > 10)
                cout << "The number is greater than 10" << endl;
            else if(number == 4)
                cout << "The number is 4" << endl;
            else
                cout << "The number is less than 10 and different from 4" << endl;
        }
        else
        {
            cout << "The number digited is odd" << endl;
            if(number > 11)
                cout << "The number is greater than 10" << endl;
            else if(number == 5)
                cout << "The number is 5" << endl;
            else
                cout << "The number is less than 11 and different from 5" << endl;
        }
    }
    else
        cout << "The number is 0 and it is neither even nor odd.";
    return 0;
}

