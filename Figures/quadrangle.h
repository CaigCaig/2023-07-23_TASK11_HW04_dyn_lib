#pragma once
#include "figure.h"

#ifndef FIGURESDYNAMICLIB
#define FIG_LIB_API __declspec(dllexport)
#else
#define FIG_LIB_API __declspec(dllimport)
#endif // !FIGURESDYNAMICLIB

namespace Figures
{
	class Quadrangle : public Figure {
	public:
		FIG_LIB_API Quadrangle();
		FIG_LIB_API Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
	};
}