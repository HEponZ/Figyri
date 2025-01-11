#pragma once
#include "Shape.h"

class Square : public Shape
{
private:
	int side_length;
public:
	Square() = default;
	// онструктор с параметрами дл€ инициализиции фигур при создании
	Square(int length_S, pair<int, int> cord_S) noexcept : Shape(cord_S), side_length{ length_S } {}

	//ћодификаторы и аксессоры
	int get_length() const noexcept { return side_length; }
	void set_length(int len_S) noexcept { side_length = len_S; }

	//ѕереопределенный метод дл€ вывода данных о фигуре
	void Show() const noexcept override;
};