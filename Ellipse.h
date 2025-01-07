#pragma once
#include "Shape.h"

class Ellipse : public Shape
{
private:
	double upper_coord;
	int length;
	int width;
public:
	Ellipse(double coord_S, int length_S, int width_S) noexcept : upper_coord{ coord_S }, length{ length_S }, width{ width_S } {}

	void Show()const noexcept;
};