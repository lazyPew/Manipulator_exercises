#pragma once
#include <iostream>

class Manipulator3D
{
public:
	Manipulator3D(double x_orig, double y_orig, double z_orig);

	void moveManipulator(double, double, double);
	void printCoords();
private:
	double _x;
	double _y;
	double _z;
};