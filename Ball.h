#pragma once
#include "Body3D.h"

class Ball: public Body3D {

	Point3D pivot;
	float radius;

public:

	Ball(float InX, float InY, float InZ, float InRadius);
	~Ball();

	virtual float GetSurfaceArea();
	virtual float GetVolume();
	virtual Point3D GetCenter();

};

