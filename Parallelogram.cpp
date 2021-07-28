#include "Parallelogram.h"
#include <math.h>


Parallelogram::Parallelogram(double _x1, double _y1, double _x2, double _y2, double _x3, double _y3)
	: x1(_x1), y1(_y1), x2(_x2), y2(_y2), x3(_x3), y3(_y3) {
	side1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	side2 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	angle = acos(((x3 - x1) * (x2 - x1) + (y3 - y1) * (y2 - y1)) / (side1 * side2));
}
Parallelogram::~Parallelogram() {
}

double Parallelogram::areaCalc() {
	return (side1 * (sin(angle) * side2));
}

double Parallelogram::perimeterCalc() {
	return (side1 + side2) * 2;
}

std::tuple<double, double> Parallelogram::getCenter() {
	return std::make_tuple(((x2 + x3) / 2), ((y2 + y3) / 2));
}

std::vector<double> Parallelogram::getVertices() {
	std::vector<double> vertices;
	vertices.push_back(x1);
	vertices.push_back(y1);
	vertices.push_back(x2);
	vertices.push_back(y2);
	vertices.push_back(x3);
	vertices.push_back(y3);
	vertices.push_back(x3+x2-x1);
	vertices.push_back(y3+y2-y1);
	return vertices;
}
