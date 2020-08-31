#include <iostream>
#include <cmath>
using namespace std;

struct Point 
{
    float x;
    float y;
};

float calculate_distance(Point* p1, Point* p2);

int main(void)
{
    float distancePoints;
    Point p1, p2;

    cout << "Enter a point (x, y): ";
    cin >> p1.x >> p1.y;
    cout << "Enter a point (x, y): ";
    cin >> p2.x >> p2.y;

    distancePoints = calculate_distance(&p1, &p2);
    
    cout << "Distance = " << distancePoints;

    return 0;
}

float calculate_distance(Point* p1, Point* p2)
{
    float dx, dy, dist;

    dx = p2->x - p1->x;
    dy = p2->x - p1->y;
    dist = sqrt(pow(dx, 2) + pow(dy, 2));
    
    return dist;
}
