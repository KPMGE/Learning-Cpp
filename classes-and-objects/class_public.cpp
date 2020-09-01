// Program to illustrate the working of
// objects and class in C++ Programming

#include <iostream>
using namespace std;

// create a class
class Room 
{

   public:
    double length;
    double breadth;
    double height;

    double calculateArea() 
    {
        return length * breadth;
    }

    double calculateVolume() 
    {
        return length * breadth * height;
    }
};

int main(void) 
{

    double area, volume;
    // create object of Room class
    Room room1;

    // assign values to data members
    cout << "Enter the lenght: ";
    cin >> room1.length;

    cout << "Enter the breadth: ";
    cin >> room1.breadth;

    cout << "Enter the height: ";
    cin >> room1.height;

    //calculate area and display of the room
    area = room1.calculateArea();
    volume = room1.calculateVolume();

    //displaying results
    cout << "Area of Room =  " << area << endl;
    cout << "Volume of Room =  " << volume << endl;

    return 0;
}
