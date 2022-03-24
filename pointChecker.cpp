#include "pointChecker.hpp"

using namespace std;
using PointList = std::list<std::pair<double, double>>;

void PointChecker::checkManipulatorToMove(Manipulator& man1, Manipulator& man2, std::pair<double, double> destinationPoint){
    checkManipulatorToMove(man1, man2, destinationPoint.first, destinationPoint.second);
}

void PointChecker::checkManipulatorToMove(Manipulator& man1, Manipulator& man2, double x_dest, double y_dest){
    double distance_manipulator1 = man1.distanceToThePoint(x_dest, y_dest);
    double distance_manipulator2 = man2.distanceToThePoint(x_dest, y_dest);

    if ((man1.radius() < distance_manipulator1) && (man2.radius() < distance_manipulator2)) {
        cout << "OUT RANGE" << endl;
        return;
    }

    if ((man1.radius() >= distance_manipulator1) && (man2.radius() >= distance_manipulator2)) {
        if (distance_manipulator1 > distance_manipulator2)
            cout << "Manipulator 2 is closer. Moving Maniplator 2." << endl;
        else if (distance_manipulator1 < distance_manipulator2)
            cout << "Manipulator 1 is closer. Moving Maniplator 1." << endl;
        else
            cout << "Manipulator 1 and Manipulator 2 are equally close" << endl;
    }
    else if (man1.radius() >= distance_manipulator1)
        cout << "Moving Maniplator 1." << endl;

    else
        cout << "Moving Maniplator 2." << endl;
}

void PointChecker::moveManipulators(Manipulator& man1, Manipulator& man2, PointList pointList){
    for (const auto& point : pointList) {
        //cout << man1.distanceToThePoint(point.first, point.second) << " " << man2.distanceToThePoint(point.first, point.second) << endl;
        if (man1.distanceToThePoint(point.first, point.second) < man2.distanceToThePoint(point.first, point.second))
        {
            cout <<"MAN 1  " ;
            man1.moveToTheNextPoint(point.first, point.second);
        }
        else {
            cout << "MAN 2  " ;
            man2.moveToTheNextPoint(point.first, point.second);
        }
    }
}

