#pragma once
#include "figure.h"
#include "declspec.h"

namespace Figures
{
	class Triangle : public Figure {
	public:
		FIG_LIB_API Triangle();
		FIG_LIB_API Triangle(int a, int b, int c, int A, int B, int C);
	};
}