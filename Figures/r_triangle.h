#pragma once
#include "figure.h"
#include "triangle.h"

#ifndef FIGURESDYNAMICLIB
#define FIG_LIB_API __declspec(dllexport)
#else
#define FIG_LIB_API __declspec(dllimport)
#endif // !FIGURESDYNAMICLIB

namespace Figures
{
	class R_triangle : public Triangle {
	public:
		FIG_LIB_API R_triangle(int a, int b, int c, int A, int B);
	};
}