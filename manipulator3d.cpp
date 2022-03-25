#include "manipulator3d.hpp"

Manipulator3D::Manipulator3D(int x_orig, int y_orig, int z_orig)
{
}

void Manipulator3D::setNewCoords(int x_new, int y_new, int z_new)
{
	_x = x_new;
	_y = y_new;
	_z = z_new;
	std::cout << _x << " " << _y << " " << _z << std::endl;
}
