#pragma once
#include <iostream>
#include <list>
#include "manipulator.hpp"

class PointChecker
{
public:
    static void checkManipulatorToMove(
        Manipulator& man1,
        Manipulator& man2,
        double x_dest,
        double y_dest);
    
    static void checkManipulatorToMove(
        Manipulator& man1,
        Manipulator& man2,
        Point destinationPoint);

    static void checkWhichIsCloser(
        double distance1, 
        double distance2);

    static void moveManipulators(
        Manipulator& man1,
        Manipulator& man2,
        PointList pointList);
};