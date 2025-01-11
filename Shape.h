#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Shape
{
protected:
	//���� ��� �������� ���������
	pair<int, int> coord;
public:
	Shape() = default;
	//����������� � ����������� ��� ������������� ����� ��� ��������
	Shape(pair<int, int> cord_S) : coord{ cord_S }{}
	//����� ��� ������ ������ � ������
	virtual void Show() const noexcept {}

	//������������ � ���������
	pair<int, int> get_cord() { return coord; }
	void set_cord(pair<int, int> cord_S) { coord = cord_S; }

	//�������� ������
	virtual ~Shape() {}
};