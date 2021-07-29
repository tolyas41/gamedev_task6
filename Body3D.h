#pragma once
#define _USE_MATH_DEFINES
#include <math.h>

class Body3D {
public:
	struct Point3D {
		float x;
		float y;
		float z;
	};
	virtual float GetSurfaceArea() = 0;
	virtual float GetVolume() = 0;
	virtual Point3D GetCenter() = 0;

};

