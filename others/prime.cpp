//Simple program that checks if the digited number is a prime number

#include <iostream>
using namespace std;

bool isPrime(int n);

int main(void)
{
    int number;

    cout << "Enter a integer number: ";
    cin >> number;

    if(isPrime(number))
        cout << "The number entered is prime!!";
    else
        cout << "The number entered is not prime!!";

    return 0;
}

bool isPrime(int n)
{
    //if the number is 0, 1 or -1 it isn't a prime number
    if((n == 0) || (n == 1) || (n == -1))
        return false;

    else if(n > 0)
    {
        for(int i = 2; i < n; i++)
        {
            if(n % i == 0)
                return false;
        }
        return true;
    }
    else
    {
        for(int i = -2; i > n; i--)
        {
            if(n % i == 0)
                return false;
        }
        return true;
    }
}
