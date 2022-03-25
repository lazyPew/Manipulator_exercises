#pragma once
#include <string>
#include <fstream>
#include <iostream>

using namespace std;
class ParserGCODE
{
public:
	ParserGCODE(string fileName);

	void parseFileForManipulator();

private:
	string _fileName;
};

