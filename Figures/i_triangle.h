#pragma once
#include "figure.h"
#include "triangle.h"
#include "declspec.h"

namespace Figures
{
	class I_triangle : public Triangle {
	public:
		FIG_LIB_API I_triangle(int a, int b, int A, int B);
	};
}