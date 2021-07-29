#pragma once
#define _USE_MATH_DEFINES
#include <math.h>

class Body2D {
public:
	struct Center2D {
		float x;
		float y;
	};
	virtual float GetPerimeter() = 0;
	virtual float GetArea() = 0;
	virtual Center2D GetCenter() = 0;

};

