#pragma once
#include "figure.h"
#include "quadrangle.h"
#include "declspec.h"

namespace Figures
{
	class Parallelogram : public Quadrangle {
	public:
		FIG_LIB_API Parallelogram(int a, int b, int A, int B);
	};
}