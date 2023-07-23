#include "pch.h"
#include <iostream>
#include "parallelogram.h"

namespace Figures
{
	Parallelogram::Parallelogram(int a, int b, int A, int B) {
		this->sides_count = 4;
		this->a = a;
		this->b = b;
		this->c = a;
		this->d = b;
		this->A = A;
		this->B = B;
		this->C = A;
		this->D = B;
		this->name = "ֿאנאככוכמדנאלל";
	};
}