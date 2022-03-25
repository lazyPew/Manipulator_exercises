#include "manipulator3d.hpp"

//double ??
Manipulator3D::Manipulator3D(int x_orig, int y_orig, int z_orig)
	: _x{x_orig}
	, _y{y_orig}
	, _z{z_orig}
{
}

void Manipulator3D::moveManipulator(int x_new, int y_new, int z_new)
{
	_x += x_new;
	_y += y_new;
	_z += z_new;
}
void Manipulator3D::printCoords()
{
	std::cout << _x << " " << _y << " " << _z << std::endl;
}