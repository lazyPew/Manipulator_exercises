#include "manipulator.hpp"
#include "stdio.h"

using namespace std;

template<class ManipulatorType1, class ManipulatorType2, typename NumberType1, typename NumberType2>
void compareDistancesToThePoint(ManipulatorType1 man1, 
                                ManipulatorType2 man2,
                                NumberType1 x_dest, 
                                NumberType2 y_dest)
{
    auto dist1 = man1.distanceToThePoint(x_dest,y_dest);
    auto dist2 = man2.distanceToThePoint(x_dest,y_dest);
    cout << x_dest << " " << y_dest << endl;
    if(dist1 > dist2)
        cout << "manip2 is closer" << endl;
    else if(dist1 < dist2)
        cout << "manip2 is closer" << endl;
    else
        cout << "manip1 and 2 are equally close" << endl;
}

int main(int argc, char *argv[]){

    
    Manipulator a(0,0,4.1);
    Manipulator b(14.5,23/6,1);
    
    a.printCoords();
    b.printCoords();

    compareDistancesToThePoint(a,b,10,9.48);
    return 0;
}