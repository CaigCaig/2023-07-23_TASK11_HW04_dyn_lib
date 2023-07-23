#include "pch.h"
#include <iostream>
#include "quadrangle.h"

namespace Figures
{
	Quadrangle::Quadrangle() {};
	Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
		this->sides_count = 4;
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
		this->name = "Четырёхугольник";
	};
}