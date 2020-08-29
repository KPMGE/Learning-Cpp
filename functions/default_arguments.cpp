//Example of program with default arguments in the functions
//OBS: we only define default argument in the prototype of the function!!

#include <iostream>
#include <cmath>

using namespace std;

float distance_points(float x1 = 0, float y1 = 0, float x2 = 0, float y2 = 0);

int main(void)
{
    
    cout << "Distance (default): " << distance_points() << endl; //Obs: x1 = y1 = x2 = y2 = 0
    cout << "Distance (3, 1) <-> (0, 0) : " << distance_points(3, 1) << endl; //Obs: x2 = 0, y2 = 0
    cout << "Distance (3, 1) <-> (2.2, 8.23) : " << distance_points(3, 1, 2.2, 8.23) << endl;

    return 0;
}

float distance_points(float x1, float y1, float x2, float y2)
{
    float dx, dy, distancePoints;

    dx = x2 - x1;
    dy = y2 - y1;

    distancePoints = sqrt(pow(dx, 2) + pow(dy, 2));

    return distancePoints;
}
