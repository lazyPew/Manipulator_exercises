#include "pointChecker.hpp"

using namespace std;

void PointChecker::checkManipulatorToMove(Manipulator& man1, Manipulator& man2, Point destinationPoint){
    checkManipulatorToMove(man1, man2, destinationPoint.first, destinationPoint.second);
}

void PointChecker::checkManipulatorToMove(Manipulator& man1, Manipulator& man2, double x_dest, double y_dest){
    double distance_manipulator1 = man1.distanceToThePoint(x_dest, y_dest);
    double distance_manipulator2 = man2.distanceToThePoint(x_dest, y_dest);

    if ((man1.radius() < distance_manipulator1) && (man2.radius() < distance_manipulator2)) {
        cout << "OUT RANGE" << endl;
        return;
    }

    if ((man1.radius() >= distance_manipulator1) && (man2.radius() >= distance_manipulator2))
        checkWhichIsCloser(distance_manipulator1,distance_manipulator2);
    else if (man1.radius() >= distance_manipulator1)
        cout << "Moving Maniplator 1." << endl;
    else
        cout << "Moving Maniplator 2." << endl;
}

void PointChecker::checkWhichIsCloser(double distance1, double distance2){
    if (distance1 > distance2)
        cout << "Manipulator 2 is closer. Moving Maniplator 2." << endl;
    else if (distance1 < distance2)
        cout << "Manipulator 1 is closer. Moving Maniplator 1." << endl;
    else
        cout << "Manipulator 1 and Manipulator 2 are equally close" << endl;
}

void PointChecker::moveManipulators(Manipulator& man1, Manipulator& man2, PointList pointList){
    for (const auto& point : pointList) {
        if (man1.distanceToThePoint(point.first, point.second) < man2.distanceToThePoint(point.first, point.second))
            man1.moveToTheNextPoint(point.first, point.second);
        else 
            man2.moveToTheNextPoint(point.first, point.second);
    }
}

