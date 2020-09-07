//simple example of multiple inheritance in C++
//OBS: we must work carefuly because with multiple inheritance, it can to occur ambiguity

#include <iostream>
using namespace std;

class Mammal 
{
  public:
    Mammal()
    {
      cout << "Mammals can give direct birth." << endl;
    }
};

class WingedAnimal {
  public:
    WingedAnimal()
    {
      cout << "Winged animal can flap." << endl;
    }
};

class Bat: public Mammal, public WingedAnimal {
};

int main()
{
    Bat b1;
    return 0;
}
