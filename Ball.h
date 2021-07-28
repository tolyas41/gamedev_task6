#pragma once
#include "Body3D.h"

class Ball: public Body3D {

	double x1, y1, z1;	  //center
	double radius;

public:

	Ball(double _x1, double _y1, double _z1, double _radius);
	~Ball();

	virtual double surfaceCalc();
	virtual double volumeCalc();
	virtual std::tuple<double, double, double> getCenter();

};

