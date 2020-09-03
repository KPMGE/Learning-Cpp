#include <iostream>
using namespace std;

class Student
{
    int age;

   public:

    // constructor initializes age to 12
    Student() : age(12){}

    void getAge() 
    {
        cout << "Age = " << age << endl;
    }
};

int main(void)
{
    // dynamically declare Student object
    Student* ptr = new Student();

    // call getAge() function
    ptr->getAge();

    // ptr memory is released
    delete ptr;

    return 0;
}
