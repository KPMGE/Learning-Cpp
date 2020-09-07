#include <iostream>
using namespace std;

class base
{
    public :
        void someFunction();
};

class base2
{
    public:
        void someFunction();
};

class derived : public base, public base2
{
};

int main(void)
{
    derived Obj;

    //error, amguity!!
    Obj.someFunction();

    //correct, using scope resolution function
    Obj.base :: someFunction();
    Obj.base2 :: someFunction();

    return 0;
}
