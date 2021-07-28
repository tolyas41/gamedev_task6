#pragma once
#include <tuple>

class Body3D {
public:

	virtual double surfaceCalc() = 0;
	virtual double volumeCalc() = 0;
	virtual std::tuple<double, double, double> getCenter() = 0;

};

