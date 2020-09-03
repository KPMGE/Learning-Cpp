#include <iostream>
using namespace std;

int factorial(int n);
long int combination(int n, int p);
long int arrangement(int n, int p);

int main(void)
{
    int n, p;
    
    cout << "Enter a n: ";
    cin >> n;
    cout << "Enter p: ";
    cin >> p;

    cout << endl << "---------- Results ---------" << endl;
    cout << "Cn,p = " << combination(n, p) << endl;
    cout << "Pn,n = " << factorial(n) << endl;
    cout << "An,p = " << arrangement(n, p);

    return 0;
}

int factorial(int n)
{
    long int factorial = 1;
    for(int i = 1; i <= n; i++)
        factorial *= i;

    return factorial;
}

long int combination(int n, int p)
{
    long int combination;
    combination = factorial(n) / factorial(n - p);
    return combination;
}

long int arrangement(int n, int p)
{
    long int arrangement;
    arrangement = factorial(n) / (factorial(p) * factorial(n - p));
    return arrangement;
}
