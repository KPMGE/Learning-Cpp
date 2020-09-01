// Program to illustrate the working of
// public and private in C++ Class

#include <iostream>
using namespace std;

class Room 
{
   //private members
   private:
    double length;
    double breadth;
    double height;

   public:
    // function to initialize private variables
    void getData(double len, double brth, double hgt) {
        length = len;
        breadth = brth;
        height = hgt;
    }

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

int main(void) 
{
    double breadth, length, height;
    double area, volume;

    // create object of Room class
    Room room1;

    //reading data of the user
    cout << "Enter breadth: ";
    cin >> breadth;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter height: ";
    cin >> height;

    // pass the values of private variables as arguments
    room1.getData(length, breadth, height);

    //calculating area and volume
    area  = room1.calculateArea();
    volume = room1.calculateVolume();

    //displaying results
    cout << "Area of Room =  " << area << endl;
    cout << "Volume of Room =  " << volume << endl;

    return 0;
}
