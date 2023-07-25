#pragma once
#include "figure.h"
#include "quadrangle.h"
#include "use_dll.h"

namespace Figures
{
	class Rhomb : public Quadrangle {
	public:
		FIG_LIB_API Rhomb(int a, int A, int B);
	};
}