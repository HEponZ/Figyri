#include "Rectangle.h"

void Rectangle::Show() const noexcept
{
	cout << "�������������\n���������� �������� ������ ����: " << coord.first << "." << coord.second << "\n������: " << length << "\n�����: " << width;
}