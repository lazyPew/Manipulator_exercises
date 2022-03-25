#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include "manipulator3d.hpp"

using namespace std;
class ParserGCODE
{
public:
	ParserGCODE(string fileName);
	void parseFileForManipulator();

private:
	bool manipulatorInit(string);
	bool parseLine(string);
	void printResults(bool);

private:
	string _fileName;
	Manipulator3D* _manipulator;
};

