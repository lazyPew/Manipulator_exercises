#pragma once
#include <iostream>

class Manipulator3D
{
public:
// double
	Manipulator3D(int x_orig, int y_orig, int z_orig);

	void moveManipulator(int, int, int);
	void printCoords();
private:
	double _x;
	double _y;
	double _z;
};