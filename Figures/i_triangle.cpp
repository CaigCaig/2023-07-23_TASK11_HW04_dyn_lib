#include "pch.h"
#include <iostream>
#include "i_triangle.h"

namespace Figures
{
	I_triangle::I_triangle(int a, int b, int A, int B) {
		this->sides_count = 3;
		this->a = a;
		this->b = b;
		this->c = a;
		this->A = A;
		this->B = B;
		this->C = A;
		this->name = "Равнобедренный треугольник";
	};
}