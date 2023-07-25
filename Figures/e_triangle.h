#pragma once
#include "figure.h"
#include "triangle.h"
#include "use_dll.h"

namespace Figures
{
	class E_triangle : public Triangle {
	public:
		FIG_LIB_API E_triangle(int a);
	};
}