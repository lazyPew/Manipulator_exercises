#include "ExerciseController.h"
#include <regex>
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    std::string line;

    // std::fstream in("GCODE"); // окрываем файл для чтения
    // if (in.is_open())
    // {
    //     int x,y,z;
    //     in >> x >> y >> z;
    //     cout << x << " is x " << y << " is y " << z << " is z " <<  endl;
    //     while (getline(in, line))
    //     {
    //         cout << line << endl;
    //         regex reg("[XYZ](-?\\d+);[XYZ](-?\\d+);[XYZ](-?\\d+);");
    //         smatch m;
            
    //         if(regex_search(line,m,reg)){
    //             for(auto i = 1; i < m.size(); i++)
    //                 cout << m[i] << " ";
    //         }
    //         else{
    //             cout << "NO MATCH";
    //         }   
    //         cout << endl;    
    //     }
    // }
    // in.close();  

    ExerciseController* controller = new ExerciseController();
    controller->beginWork();

    return 0;


}