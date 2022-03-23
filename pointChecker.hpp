#include <iostream>

// #pragma once

using namespace std;

class PointChecker
{
    template<class ManipulatorType1, class ManipulatorType2, typename NumberType1, typename NumberType2>
    static void checkManipulatorToMove(ManipulatorType1& man1, 
                                    ManipulatorType2& man2,
                                    NumberType1 x_dest, 
                                    NumberType2 y_dest)
    {
    auto dist1 = man1.distanceToThePoint(x_dest,y_dest);
    auto dist2 = man2.distanceToThePoint(x_dest,y_dest);

    if ((man1.radius() < dist1) && (man2.radius() < dist2)) {
        cout << "OUT RANGE";
        return;
    }

    if ((man1.radius() >= dist1) && (man2.radius() >= dist2)) {
        if (dist1 > dist2)
            cout << "Manipulator 2 is closer. Moving Maniplator 2." << endl;
        else if (dist1 < dist2)
            cout << "Manipulator 1 is closer. Moving Maniplator 1." << endl;
        else
            cout << "Manipulator 1 and Manipulator 2 are equally close" << endl;
    }
    else if(man1.radius() >= dist1)
        cout << "Moving Maniplator 1." << endl;

    else
        cout << "Moving Maniplator 2." << endl;
    }
};