#include "ParserGCODE.h"
#include "manipulator3d.hpp"
#include <regex>
#include <sstream>

ParserGCODE::ParserGCODE(string fileName)
	: _fileName{fileName}
    , _manipulator{nullptr}
{}

void ParserGCODE::parseFileForManipulator()
{
    std::string line;
    std::fstream in(_fileName);

    if (in.is_open())
    {
        bool error = false;
        while (getline(in, line) && !error)
        {
            if(_manipulator == nullptr)
                error = manipulatorInit(line);
            else
                error = parseLine(line);
        }
        printResults(error);
    }
    in.close(); 
}

bool ParserGCODE::manipulatorInit(string line)
{
    int x,y,z;
    istringstream s(line);
    s >> x >> y >> z;
    if(!s.fail())
        _manipulator = new Manipulator3D(x,y,z);
    else{
        cout << "Incorrect manipulator coordinates" << endl;
        return true;
    }
    return false;
}

bool ParserGCODE::parseLine(string line)
{
    regex reg("[X](-?\\d+);[Y](-?\\d+);[Z](-?\\d+);");
    smatch m;
    
    if(regex_search(line,m,reg)){
        _manipulator->moveManipulator(std::stoi(m[1]),
                                      std::stoi(m[2]),
                                      std::stoi(m[3]));
    }
    else{
        return true;
    }   

    return false;
}

void ParserGCODE::printResults(bool error){
    if(_manipulator)
        _manipulator->printCoords();
    if(error)
        cout << "ERROR SCRIPT" << endl;
}
