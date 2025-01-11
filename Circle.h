#pragma once
#include "Shape.h"

class Circle : public Shape
{
private:
	int radius;
public:
	Circle() = default;
	//����������� � ����������� ��� ������������� ����� ��� ��������
	Circle(pair<int, int> cord_S, int radius_S) noexcept : Shape(cord_S), radius{radius_S} {}

	//������������ � ���������
	int get_rad() const noexcept { return radius; }
	void set_rad(int rad_S) noexcept { radius = rad_S; }

	//���������������� ����� ��� ������ ������ � ������
	void Show() const noexcept override;
};