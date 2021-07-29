#pragma once
#include "Body3D.h"

class Ball: public Body3D {

	float x1;
	float y1;
	float z1;
	float radius;

public:

	Ball(float InX1, float InY1, float InZ1, float _radius);
	~Ball();

	virtual float GetSurfaceArea();
	virtual float GetVolume();
	virtual Point3D GetCenter();

};

