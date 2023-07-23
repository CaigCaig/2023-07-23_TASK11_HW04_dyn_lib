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
	class E_triangle : public Triangle {
	public:
		FIG_LIB_API E_triangle(int a);
	};
}