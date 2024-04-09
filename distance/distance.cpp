#include<cmath>
#include"../point/point.h"
double getDistance (const Point & first, const Point & second) {
    double xDistance = first.getX() - second.getX(); 
    double yDistance = first.getY() - second.getY();
    double square = (xDistance * xDistance) + (yDistance * yDistance); 
    double result = sqrt(square); 
    return result; 
}