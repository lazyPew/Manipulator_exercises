#include <iostream>
#include <tuple>
#include <math.h>
#pragma once

class Manipulator{
public:
    Manipulator(double x_origin, double y_origin, double radius);

    bool isPointInRadius(double, double);
    double distanceToThePoint(double, double);
    void printCoords();

    double radius() const { return _radius; }

private:
    std::pair<double,double> _coords;
    double _radius;

};
