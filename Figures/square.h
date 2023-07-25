#pragma once
#include "figure.h"
#include "quadrangle.h"
#include "use_dll.h"

namespace Figures
{
	class Square : public Quadrangle {
	public:
		FIG_LIB_API Square(int a);
	};
}