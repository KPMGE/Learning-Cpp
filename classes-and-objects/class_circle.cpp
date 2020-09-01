#include <iostream>
#include <cmath>
using namespace std;

//defining const to PI number
const float PI = 3.14159;

//struct for a point
struct Point
{
    float x;
    float y;
};

//class for a circle
class Circle
{
    private:
        Point center;
        float radius;

    public:
        //assign data to private members
        Circle(Point* c, float r)
        {
            center.x = c->x;
            center.y = c->y;
            radius = r;
        }

        float calculateArea()
        {
            return PI * pow(radius, 2);
        }

        float calculateVolume()
        {
            return (4 * PI * pow(radius, 3)) / 3; 
        }

        int insideCircle(Point* p)
        {
            float distance_center, dx, dy;

            dx = center.x - p->x;
            dy = center.y - p->y;
            distance_center = sqrt(pow(dx, 2) + pow(dy, 2));

            if(distance_center < radius)
                return 1;
            else 
                return 0;
        }
};

int main(void)
{
    Point c, p;
    float r;
    
    //reading Circle
    cout << "Enter the center of the circle (x, y): ";
    cin >> c.x >> c.y;
    cout << "Enter radius of the circle: ";
    cin >> r;

    //initializing circ
    Circle circ(&p, r);

    //calculating and displaying area an volume
    cout << "The area of the circle is: " << circ.calculateArea() << endl; 
    cout << "The volume of the circle is: " << circ.calculateVolume() << endl << endl; 

    //read other pointt
    cout << "Enter any point: ";
    cin >> p.x >> p.y;

    //checking if the point is inside of circle
    if(circ.insideCircle(&p))
        cout << "This point is inside of the circle!";
    else
        cout << "This point is not inside of the circle!";

   return 0; 
}
