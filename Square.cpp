#include "Square.h"

void Square::Show() const noexcept
{
	cout << "Квадрат\nКоордината верхнего левого угла: " << coord.first << "." << coord.second << "\nДлина стороны: " << side_length;
}