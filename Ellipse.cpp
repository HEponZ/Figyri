#include "Ellipse.h"

void Ellipse::Show()const noexcept
{
	cout << "Эллипс\nКоордината верхнего угла описанного вокруг него прямоугольника: " << coord.first << "." << coord.second << "\nДлина: " << length << "\nШирина: " << width;
}