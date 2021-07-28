#pragma once
#include "Body2D.h"
#include <vector>

class Parallelogram: public Body2D {

	double x1, y1;			//intersection side1-side2
	double x2, y2;			//side1 endpoint
	double x3, y3;			//side2 endpoint
	double side1;
	double side2;
	double angle;

public:

	Parallelogram(double _x1, double _y1, double _x2, double _y2, double _x3, double _y3);
	~Parallelogram();

	virtual double areaCalc();
	virtual double perimeterCalc();
	virtual std::tuple<double, double> getCenter();
	std::vector<double> getVertices();
};

