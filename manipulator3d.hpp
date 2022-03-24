#pragma once
#include "manipulator.hpp"

class Manipulator3D : public Manipulator
{
public:
	Manipulator3D(double x_orig, double y_orig, double z_orig, double radius);

	void setNewCoords(double, double, double);
private:
	double _z;
};