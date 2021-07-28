#include "Ellipse.h"
#include <math.h>


Ellipse::Ellipse(double _x1, double _y1, double _radius1, double _radius2)
	: x1(_x1), y1(_y1), radius1(_radius1), radius2(_radius2) {
}
Ellipse::~Ellipse() {
}

double Ellipse::perimeterCalc() {
	return 2 * 3.1416 * sqrt((radius1 * radius1 + radius2 * radius2) / 2);
}

double Ellipse::areaCalc() {
	return 3.1416 * radius1 * radius2;
}

std::tuple<double, double> Ellipse::getCenter() {
	return std::make_tuple(x1, y1);
}
