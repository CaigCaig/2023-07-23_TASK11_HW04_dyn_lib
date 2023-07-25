#pragma once
#include "figure.h"
#include "use_dll.h"

namespace Figures
{
	class Quadrangle : public Figure {
	public:
		FIG_LIB_API Quadrangle();
		FIG_LIB_API Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
	};
}