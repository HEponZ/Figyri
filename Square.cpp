#include "Square.h"

void Square::Show() const noexcept
{
	cout << "Квадрат\nКоордината верхнего левого угла: " << upper_left_coord << "\nДлина стороны: " << side_length;
}