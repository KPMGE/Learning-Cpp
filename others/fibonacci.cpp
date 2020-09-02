//Program that displays the fibonacci sequence

#include <iostream>
using namespace std;

//function that displays the numbers of the fibonacci sequence until n
void displayFibonacci(int n);

int main(void)
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    displayFibonacci(n);

    return 0;
}

void displayFibonacci(int n)
{
    int i, previous1 = 1, previous2 = 0, nextN;

    //displaying the firs '1' of the sequence
    cout << "1 ";
    for(i = 1; i < n; i++)
    {
        //calculating the next number with the sum of previous1 and previous2
        nextN = previous1 + previous2;
        //assigning the value of previous1 to previous2
        previous2 = previous1;
        //assigning the value of next to previous1
        previous1 = nextN;

        cout << nextN << " ";
    }
}
