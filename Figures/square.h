#pragma once
#include "figure.h"
#include "quadrangle.h"

#ifndef FIGURESDYNAMICLIB
#define FIG_LIB_API __declspec(dllexport)
#else
#define FIG_LIB_API __declspec(dllimport)
#endif // !FIGURESDYNAMICLIB

namespace Figures
{
	class Square : public Quadrangle {
	public:
		FIG_LIB_API Square(int a);
	};
}