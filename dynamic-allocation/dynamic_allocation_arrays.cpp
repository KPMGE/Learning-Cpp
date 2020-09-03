// C++ Program to store GPA of n number of students and display it
// where n is the number of students entered by the user

#include <iostream>
#include <cstring>
using namespace std;

int main(void) 
{
    int num;
    cout << "Enter total number of students: ";
    cin >> num;
    float* ptr;
    
    // memory allocation of num number of floats
    ptr = new float[num];

    cout << "Enter GPA of students." << endl;
    for (int i = 0; i < num; ++i) 
    {
        cout << "Student" << i + 1 << ": ";
        cin >> *(ptr + i);
    }

    cout << "\nDisplaying GPA of students." << endl;
    for (int i = 0; i < num; ++i)
    {
        cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
    }

    // ptr memory is released
    delete [] ptr;

    return 0;
}
