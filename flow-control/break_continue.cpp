//Sample of a program that uses the break and continue statements

#include <iostream>
using namespace std;

int main(void)
{
    cout << "nested for loops with break" << endl;
    // first loop
    for (int i = 1; i <= 3; i++) 
    {
        // second loop
        for (int j = 1; j <= 3; j++) 
        {
            if (i == 2)
                break;
            cout << "i = " << i << ", j = " << j << endl;
        }
    }

    cout << endl;

    cout << "nested for loops with continue" << endl;
    // first loop
    for (int i = 1; i <= 3; i++) 
    {
        // second loop
        for (int j = 1; j <= 3; j++) 
        {
            if (j == 2) 
                continue;
            cout << "i = " << i << ", j = " << j << endl;
        }
    }

    return 0;
}
