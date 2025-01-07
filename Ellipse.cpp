#include "Ellipse.h"

void Ellipse::Show()const noexcept
{
	cout << "Эллипс\nКоордината верхнего угла описанного вокруг него прямоугольника: " << upper_coord << "\nДлина: " << length << "\nШирина: " << width;
}