#include "pch.h"
#include <iostream>
#include "r_triangle.h"

namespace Figures
{
	R_triangle::R_triangle(int a, int b, int c, int A, int B) {
		this->sides_count = 3;
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = 90;
		this->name = "Прямоугольный треугольник";
	};
}