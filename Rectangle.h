#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
private:
	double upper_left_coord;
	int length;
	int width;
public:
	Rectangle(double coord_S, int length_S, int width_S) noexcept : upper_left_coord{ coord_S }, length{ length_S }, width{ width_S } {}

	void Show() const noexcept;
};