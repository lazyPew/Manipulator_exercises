#include "ExerciseController.h"
#include <iostream>
#include <fstream>
#include <string>
#include <regex>

int main(){

    const std::string s = "X10;Y20;Z30";

    std::regex e("(\\d+)");
    std::smatch match;

    //while (std::regex_search(s, m, e)) {
    //    for (auto x : m) std::cout << x << " ";
    //    std::cout << std::endl;
    //    s = m.suffix().str();
    //}
    //std::string line;

    //std::ifstream in("GCODE"); // окрываем файл для чтения
    //if (in.is_open())
    //{
    //    while (getline(in, line))
    //    {
    //        std::cout << line << std::endl;
    //    }
    //}
    //in.close();     // закрываем файл


    ExerciseController* controller = new ExerciseController();
    controller->beginWork();

    return 0;


}