#include "manipulator3d.hpp"

Manipulator3D::Manipulator3D(double x_orig, double y_orig, double z_orig, double radius)
	: Manipulator(x_orig,y_orig,radius)
{
}

void Manipulator3D::setNewCoords(double x_new, double y_new, double z_new)
{
	Manipulator::setNewCoords(x_new, y_new);
	_z = z_new;
}
