//Example of program with function overload

#include <iostream>

using namespace std; 

//OBS: decimal constans are, by standard, of double type

//declaring three functions with same name
int sum(int num1, int num2);
float sum(float num1, float num2);
double sum(double num1, double num2);

int main(void)
{
    //calling the same name function, but providing different data types
    sum(10, 2); //int
    sum(float(10.2), float(2.3)); //float
    sum(2.3, 21.34); //double
    return 0;
}

int sum(int num1, int num2)
{
    cout << "sum int!" << endl;
    return num1 + num2;
}
    
float sum(float num1, float num2)
{
    cout << "sum float!" << endl;
    return num1 + num2;
}

double sum(double num1, double num2)
{
    cout << "sum double!" << endl;
    return num1 + num2;
}
