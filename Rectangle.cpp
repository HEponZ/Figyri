#include "Rectangle.h"

void Rectangle::Show() const noexcept
{
	cout << "Прямоугольник\nКоордината верхнего левого угла: " << coord.first << "." << coord.second << "\nШирина: " << length << "\nДлина: " << width;
}