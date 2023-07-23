#include "pch.h"
#include <iostream>
#include "rhomb.h"

namespace Figures
{
	Rhomb::Rhomb(int a, int A, int B) {
		this->sides_count = 4;
		this->a = a;
		this->b = a;
		this->c = a;
		this->d = a;
		this->A = A;
		this->B = B;
		this->C = A;
		this->D = B;
		this->name = "Ромб";
	};
}