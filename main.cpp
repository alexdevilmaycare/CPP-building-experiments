#include<iostream>
#include"distance/distance.h"
#include"point/point.h"

int main () {
    Point first (0, 0); 
    Point second (3, 3); 
    double distance = getDistance(first, second);     
    std::cout << distance << "\n"; 
    return 0; 
}