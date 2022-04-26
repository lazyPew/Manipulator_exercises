#include <iostream>
#include <list>
#include <math.h>
#pragma once

using Point = std::pair<double, double>;
using PointList = std::list<Point>;

class Manipulator{
public:
    Manipulator(double x_origin, double y_origin, double radius);
    Manipulator(Point, double radius);

    double radius() const                    { return _radius; }
    Point coords() const                     { return _coords; }
    PointList pointsToMove() const           { return _pointsToMove; }

    virtual void setNewCoords(double, double);

    bool isPointInRadius(double, double);
    double distanceToThePoint(double, double);
    void moveToTheNextPoint(double, double);

    void printPoints();

private:
    Point _coords;
    double _radius;

    PointList _pointsToMove;

};
