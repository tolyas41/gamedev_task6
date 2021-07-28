#pragma once
#include "Body3D.h"
#include <vector>

class Box: public Body3D {

	double x1, y1, z1;
	double side1;		 //x axis side
	double side2;		 //y axis side
	double side3;		 //z axis side

public:

	Box(double _x1, double _y1, double _z1, double _side1, double _side2, double _side3);
	~Box();

	virtual double surfaceCalc();
	virtual double volumeCalc();
	virtual std::tuple<double, double, double> getCenter();
	std::vector<double> getVertices();

};

