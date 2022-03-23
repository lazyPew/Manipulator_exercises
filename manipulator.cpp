#include "manipulator.hpp"

Manipulator::Manipulator(double x, double y, double radius)
	: _coords{std::make_pair(x,y)}
	, _radius{radius}
{
	//std::cout << _coords.first << " " << _coords.second << " " << _radius << std::endl;
}

bool Manipulator::isPointInRadius(double x_dest, double y_dest)
{
	return (_radius >= distanceToThePoint(x_dest, y_dest));
}

double Manipulator::distanceToThePoint(double x_dest, double y_dest)
{
	return sqrt((x_dest - _coords.first) * (x_dest - _coords.first) + (y_dest - _coords.second) * (y_dest - _coords.second));
}

void Manipulator::printCoords()
{
	std::cout << _coords.first << " " << _coords.second << std::endl;
}
