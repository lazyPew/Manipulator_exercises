#include <iostream>
#include <tuple>
#include <math.h>

class Manipulator{
public:
    Manipulator(double x_origin, double y_origin);

    bool inRadius(double, double);
    void printCoords();

private:
    std::pair<double,double> _coords;
    double _radius;

};
