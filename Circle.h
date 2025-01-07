#pragma once
#include "Shape.h"

class Circle : public Shape
{
private:
	double center_coord;
	int radius;
public:
	Circle(double coord_S, int radius_S) noexcept : center_coord{ coord_S }, radius{ radius_S } {}

	void Show() const noexcept;
};