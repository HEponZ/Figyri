#pragma once
#include "Shape.h"

class Ellipse : public Shape
{
private:
	int length;
	int width;
public:
	Ellipse() = default;
	// онструктор с параметрами дл€ инициализиции фигур при создании
	Ellipse(pair<int, int> cord_S, int length_S, int width_S) noexcept : Shape(cord_S), length{ length_S }, width{ width_S } {}

	//ћодификаторы и аксессоры
	int get_len() const noexcept { return length; }
	int get_wid() const noexcept { return width; }
	void set_len(int len_S) noexcept { length = len_S; }
	void set_wid(int wid_S) noexcept { width = wid_S; }

	//ѕереопределенный метод дл€ вывода данных о фигуре
	void Show() const noexcept override;
};