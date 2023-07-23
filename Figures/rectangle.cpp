#include "pch.h"
#include <iostream>
#include "rectangle.h"

namespace Figures
{
	Rectangle_::Rectangle_(int a, int b) {
		this->sides_count = 4;
		this->a = a;
		this->b = b;
		this->c = a;
		this->d = b;
		this->A = 90;
		this->B = 90;
		this->C = 90;
		this->D = 90;
		this->name = "Прямоугольник";
	};
}