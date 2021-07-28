#pragma once
#include <tuple>

class Body2D {
public:
	
	virtual double perimeterCalc() = 0;
	virtual double areaCalc() = 0;
	virtual std::tuple<double, double> getCenter() = 0;

};

