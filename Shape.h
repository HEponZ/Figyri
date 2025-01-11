#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Shape
{
protected:
	//Пара для хранения координат
	pair<int, int> coord;
public:
	Shape() = default;
	//Конструктор с параметрами для инициализиции фигур при создании
	Shape(pair<int, int> cord_S) : coord{ cord_S }{}
	//Метод для вывода данных о фигуре
	virtual void Show() const noexcept {}

	//Модификаторы и аксессоры
	pair<int, int> get_cord() { return coord; }
	void set_cord(pair<int, int> cord_S) { coord = cord_S; }

	//Удаление фигуры
	virtual ~Shape() {}
};