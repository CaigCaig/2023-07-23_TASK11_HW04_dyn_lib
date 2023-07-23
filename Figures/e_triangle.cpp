#include "pch.h"
#include <iostream>
#include "e_triangle.h"

namespace Figures
{
	E_triangle::E_triangle(int a) {
		this->sides_count = 3;
		this->a = a;
		this->b = a;
		this->c = a;
		this->A = 60;
		this->B = 60;
		this->C = 60;
		this->name = "Равносторонний треугольник";
	};
}