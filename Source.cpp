#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Ellipse.h"

int main()
{
	setlocale(LC_ALL, "rus");
	//Ёто массив фигур, содержит фигуры
	vector<Shape*> figures;
	//—оздание и инициализаци€ фигур
	figures.push_back(new Square(1,{1,1}));
	figures.push_back(new Rectangle({2, 2}, 2, 2));
	figures.push_back(new Circle({ 3, 3 }, 3));
	figures.push_back(new Ellipse({ 4, 4 }, 4, 4));

	//¬ывод фигур
	for (int i{ 0 }; i < figures.size(); i++)
	{
		figures[i]->Show();
		cout << "\n";
	}

	return 0;
}