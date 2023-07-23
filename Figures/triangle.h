#pragma once
#include "figure.h"

#ifndef FIGURESDYNAMICLIB
#define FIG_LIB_API __declspec(dllexport)
#else
#define FIG_LIB_API __declspec(dllimport)
#endif // !FIGURESDYNAMICLIB

namespace Figures
{
	class Triangle : public Figure {
	public:
		FIG_LIB_API Triangle();
		FIG_LIB_API Triangle(int a, int b, int c, int A, int B, int C);
	};
}