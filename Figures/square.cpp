#include "pch.h"
#include <iostream>
#include "square.h"

namespace Figures
{
	Square::Square(int a) {
		this->sides_count = 4;
		this->a = a;
		this->b = a;
		this->c = a;
		this->d = a;
		this->A = 90;
		this->B = 90;
		this->C = 90;
		this->D = 90;
		this->name = " вадрат";
	};
}