#pragma once
#include "figure.h"
#include "triangle.h"
#include "use_dll.h"

namespace Figures
{
	class R_triangle : public Triangle {
	public:
		FIG_LIB_API R_triangle(int a, int b, int c, int A, int B);
	};
}