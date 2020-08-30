//Program that calculates the distance among two points

#include <iostream>
#include <cmath>
using namespace std;

float calculate_distance(float x1, float y1, float x2, float y2);

int main(void)
{
    float x1, x2, y1, y2, distancePoints;

    cout << "Type the point 1 (x, y): ";
    cin >> x1 >> y1; 
    cout << "Type the point 2 (x, y): ";
    cin >> x2 >> y2; 

    distancePoints = calculate_distance(x1, y1, x2, y2);

    cout << "The distance among the points is: " << distancePoints;

    return 0;
}

float calculate_distance(float x1, float y1, float x2, float y2)
{
    float dx, dy, distance;

    dx = x2 - x1;
    dy = y2 - y1;

    distance = sqrt(pow(dx, 2) + pow(dy, 2));

    return distance;
}
