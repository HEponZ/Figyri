#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Ellipse.h"

int main()
{
	setlocale(LC_ALL, "rus");
	vector<Shape*> figures;
	figures.push_back(new Square(1.1, 1));
	figures.push_back(new Rectangle(2.2, 2, 2));
	figures.push_back(new Circle(3.3, 3));
	figures.push_back(new Ellipse(4.4, 4, 4));

	for (int i{ 0 }; i < figures.size(); i++)
	{
		figures[i]->Show();
		cout << "\n";
	}

	return 0;
}