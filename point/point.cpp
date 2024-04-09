class Point {
    private: 
    double xCoord; 
    double yCoord;
    public:
    Point (double x, double y) {
        xCoord = x; 
        yCoord = y; 
    }
    double getX () const {
        return xCoord; 
    }
    double getY () const {
        return yCoord; 
    }
};
