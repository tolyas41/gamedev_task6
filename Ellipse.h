#pragma once
#include "Body2D.h"

class Ellipse: public Body2D {

	double x1, y1;		   //center of the ellipse
	double radius1;
	double radius2;

public:

	Ellipse(double _x1, double _y1, double _radius1, double _radius2);
	~Ellipse();

	virtual double perimeterCalc();
	virtual double areaCalc();
	virtual std::tuple<double, double> getCenter();

};

