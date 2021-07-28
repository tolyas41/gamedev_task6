#include "Parallelogram.h"
#include "Ellipse.h"
#include "Box.h"
#include "Ball.h"
#include <iostream>


int main() {

	Parallelogram parall(0, 0, 3, 1, 0, 4);
	std::cout << "parallelogram's area : ";
	std::cout << parall.areaCalc() << std::endl;
	std::cout << "parallelogram's perimeter : ";
	std::cout << parall.perimeterCalc() << std::endl;
	std::cout << "parallelogram's center : ";
	std::cout << std::get<0>(parall.getCenter()) << " ";
	std::cout << std::get<1>(parall.getCenter()) << std::endl;
	std::cout << "parallelogram's vertices : ";
	for (auto v : parall.getVertices())
		std::cout << v << " ";
	std::cout << "\n";

	Ellipse elli(0, 0, 2, 1);
	std::cout << "ellipse perimeter : ";
	std::cout << elli.perimeterCalc() << std::endl;
	std::cout << "ellipse area : ";
	std::cout << elli.areaCalc() << std::endl;

	Box box(2, 4, 5, 10, 3, 6);
	std::cout << "box's surface : ";
	std::cout << box.surfaceCalc() << std::endl;
	std::cout << "box's volume : ";
	std::cout << box.volumeCalc() << std::endl;
	std::cout << "box's center : ";
	std::cout << std::get<0>(box.getCenter()) << " ";
	std::cout << std::get<1>(box.getCenter()) << " ";
	std::cout << std::get<2>(box.getCenter()) << std::endl;
	std::cout << "box's vertices : ";
	for (auto v : box.getVertices())
		std::cout << v << " ";
	std::cout << "\n";

	Ball ball(2, 3, 4, 11);
	std::cout << "ball's surface : ";
	std::cout << ball.surfaceCalc() << std::endl;
	std::cout << "ball's volume : ";
	std::cout << ball.volumeCalc() << std::endl;
	std::cout << "ball's center : ";
	std::cout << std::get<0>(ball.getCenter()) << " ";
	std::cout << std::get<1>(ball.getCenter()) << " ";
	std::cout << std::get<2>(ball.getCenter()) << std::endl;

	return 0;
}

