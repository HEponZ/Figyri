#include "Circle.h"

void Circle::Show() const noexcept
{
	cout << "Окружность\nКоордината центра: " << coord.first << "." << coord.second << "\nРадиус: " << radius;
}