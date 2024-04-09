#ifndef POINT
#define POINT
class Point {
    private: 
    double xCoord; 
    double yCoord;
    public:
    Point (double x, double y);
    double getX () const;
    double getY () const;
};

#endif