#include "ParserGCODE.h"
#include "manipulator3d.hpp"

ParserGCODE::ParserGCODE(string fileName)
	: _fileName{fileName}
{}

void ParserGCODE::parseFileForManipulator()
{

    std::string line;

    std::ifstream in("GCODE"); // окрываем файл для чтения
    if (in.is_open())
    {
        while (getline(in, line))
        {
            std::cout << line << std::endl;
        }
    }
    in.close();     // закрываем файл
    Manipulator3D manipulator();
}
