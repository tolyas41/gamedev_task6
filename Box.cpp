#include "Box.h"

Box::Box(double _x1, double _y1, double _z1, double _side1, double _side2, double _side3) 
	: x1(_x1), y1(_y1), z1(_z1), side1(_side1), side2(_side2), side3(_side3) {
}
Box::~Box() {
}

double Box::surfaceCalc() {
	return 2 * side1 * side2 + 2 * side2 * side3 + 2 * side3 * side1;
}

double Box::volumeCalc() {
	return side1 * side2 * side3;
}

std::tuple<double, double, double> Box::getCenter() {
	return std::make_tuple(x1 + side1 / 2, y1 + side2 / 2, z1 + side3 / 2);
}

std::vector<double> Box::getVertices() {
	std::vector<double> vertices;
	vertices.push_back(x1);			  //1
	vertices.push_back(y1);
	vertices.push_back(z1);
	vertices.push_back(x1);			  //2
	vertices.push_back(y1 + side2);
	vertices.push_back(z1);
	vertices.push_back(x1 + side1);	  //3
	vertices.push_back(y1 + side2);
	vertices.push_back(z1);
	vertices.push_back(x1 + side1);	  //4
	vertices.push_back(y1);
	vertices.push_back(z1);
	vertices.push_back(x1 + side1);	  //5
	vertices.push_back(y1);
	vertices.push_back(z1 + side3);
	vertices.push_back(x1 + side1);	  //6
	vertices.push_back(y1 + side2);
	vertices.push_back(z1 + side3);
	vertices.push_back(x1);			  //7
	vertices.push_back(y1 + side2);
	vertices.push_back(z1 + side3);
	vertices.push_back(x1);			  //8
	vertices.push_back(y1);
	vertices.push_back(z1 + side3);
	return vertices;
}
