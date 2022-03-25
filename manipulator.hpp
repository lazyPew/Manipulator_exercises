#include <iostream>
#include <list>
#include <math.h>
#pragma once

using PointList = std::list<std::pair<double, double>>;

class Manipulator{
public:
    Manipulator(double x_origin, double y_origin, double radius);
    Manipulator(std::pair<double,double>, double radius);

    double radius() const                    { return _radius; }
    std::pair<double, double> coords() const { return _coords; }
    PointList pointsToMove() const           { return _pointsToMove; }

    virtual void setNewCoords(double, double);

    bool isPointInRadius(double, double);
    double distanceToThePoint(double, double);
    void moveToTheNextPoint(double, double);

    void printPoints();

private:
    std::pair<double,double> _coords;
    double _radius;

    // map<int,std::pair<double,double>> _pointsToMove;
    PointList _pointsToMove;

};
