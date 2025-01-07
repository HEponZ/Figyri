#include "Rectangle.h"

void Rectangle::Show() const noexcept
{
	cout << "Прямоугольник\nКоордината верхнего левого угла: " << upper_left_coord << "\nШирина: " << length << "\nДлина: " << width;
}