#include "Circle.h"

void Circle::Show() const noexcept
{
	cout << "Окружность\nКоордината центра: " << center_coord << "\nРадиус: " << radius;
}