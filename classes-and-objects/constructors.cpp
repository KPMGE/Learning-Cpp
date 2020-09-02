// C++ program to calculate the area of a wall

#include <iostream>
using namespace std;

// declare a class
class Wall 
{
   private:
    double length;
    double height;

   public:
    // create parameterized constructor
    Wall(double len, double hgt)
    {
        // initialize private variables
        length = len;
        height = hgt;
    }

    double calculateArea()
    {
        return length * height;
    }
};

int main(void) 
{
    double length1, height1, length2, height2;

    //reading wall's data
    cout << "Enter length and height of fist wall: ";
    cin >> length1 >> height1;
    cout << "Enter length and height of second wall: ";
    cin >> length2 >> height2;

    // create object and initialize data members
    Wall wall1(length1, height1);
    Wall wall2(length2, height2);

    cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
    cout << "Area of Wall 2: " << wall2.calculateArea() << endl;

    return 0;
}
