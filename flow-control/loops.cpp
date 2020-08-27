//examples with the loops in C++ programming language

#include <iostream>

using namespace std;

int main(void)
{
    //loop for
    int array[] = {10, 20, 141, 15 ,51 ,1, 53, 365, 44};

    cout << "for loop" << endl;
    //firt case
    for(int i = 0; i < 5; i++)
        cout << "i = " << i << endl;

    cout << endl;
    //second case
    for(int var : array)
        cout << "var = " << var << endl;



    //loop while
    int j = 0;

    cout << endl <<"while loop" << endl;
    while(j < 5)
    {
        cout << "j = " << j << endl;
        j++;
    }

    //loop do-while
    cout << endl;
    int k = 0;
    do
    {
        cout << "k = " << k << endl;
        k++;

    } while(k < 5);

    return 0;
}
