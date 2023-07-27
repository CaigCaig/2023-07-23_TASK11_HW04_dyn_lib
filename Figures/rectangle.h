#pragma once
#include "figure.h"
#include "quadrangle.h"
#include "declspec.h"

namespace Figures
{
	class Rectangle_ : public Quadrangle {
	public:
		FIG_LIB_API Rectangle_(int a, int b);
	};
}