#pragma once
#include <iostream>
#include <list>
#include "manipulator.hpp"

class PointChecker
{
public:
    //template<class ManipulatorType1, class ManipulatorType2, typename NumberType1, typename NumberType2>
    static void checkManipulatorToMove(Manipulator& man1,
        Manipulator& man2,
        double x_dest,
        double y_dest);
    
    static void checkManipulatorToMove(Manipulator& man1,
        Manipulator& man2,
        std::pair<double, double> destinationPoint);

    static void moveManipulators(Manipulator& man1,
        Manipulator& man2,
        PointList pointList);
};