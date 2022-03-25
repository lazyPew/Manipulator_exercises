#pragma once
#include <iostream>

class Manipulator3D
{
public:
	Manipulator3D(int x_orig, int y_orig, int z_orig);

	void setNewCoords(int, int, int);
private:
	double _x;
	double _y;
	double _z;
};