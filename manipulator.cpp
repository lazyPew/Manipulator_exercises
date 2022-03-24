#include "manipulator.hpp"

Manipulator::Manipulator(double x, double y, double radius)
	: Manipulator::Manipulator(std::make_pair(x,y), radius)
{}

Manipulator::Manipulator(std::pair<double,double> coordsToSet, double radius)
	: _coords{coordsToSet}
	, _radius{radius}
{}

bool Manipulator::isPointInRadius(double x_dest, double y_dest)
{
	return (radius() >= distanceToThePoint(x_dest, y_dest));
}

double Manipulator::distanceToThePoint(double x_dest, double y_dest)
{
	return sqrt((x_dest - _coords.first) * (x_dest - _coords.first) + (y_dest - _coords.second) * (y_dest - _coords.second));
}

void Manipulator::moveToTheNextPoint(double x_next, double y_next){
	std::cout << x_next << " " << y_next << std::endl;

	setNewCoords(x_next, y_next);
	_pointsToMove.push_back({ x_next,y_next });
}

void Manipulator::printPoints()
{
	for (const auto& point : pointsToMove()) {
		std::cout << "{" << point.first << "," << point.second << "}   ";
	}
	std::cout << std::endl;
}

void Manipulator::setNewCoords(double x_new, double y_new)
{
	_coords.first = x_new;
	_coords.second = y_new;

}

