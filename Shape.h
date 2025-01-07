#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Shape
{
public:
	virtual void Show() const noexcept {}

	virtual ~Shape() {}
};