#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
private:
	int length;
	int width;
public:
	Rectangle() = default;
	//����������� � ����������� ��� ������������� ����� ��� ��������
	Rectangle(pair<int, int> cord_S, int length_S, int width_S) noexcept : Shape(cord_S), length{ length_S }, width{ width_S } {}

	//������������ � ���������
	int get_len() const noexcept { return length; }
	int get_wid() const noexcept { return width; }
	void set_len(int len_S) noexcept { length = len_S; }
	void set_wid(int wid_S) noexcept { width = wid_S; }

	//���������������� ����� ��� ������ ������ � ������
	void Show() const noexcept override;
};