#pragma once
#include "Shape.h"

class Square : public Shape
{
private:
	double upper_left_coord;
	int side_length;
public:
	Square(double coord_S, int length_S) noexcept : upper_left_coord{ coord_S }, side_length{ length_S } {}

	void Show() const noexcept;
};