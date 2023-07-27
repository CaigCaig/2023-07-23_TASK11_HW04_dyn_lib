#pragma once
#include "declspec.h"

namespace Figures
{
	class Figure {
	protected:
		int sides_count, a, b, c, d, A, B, C, D;
		std::string name;
	public:
		FIG_LIB_API int get_sides();
		FIG_LIB_API int get_a();
		FIG_LIB_API int get_b();
		FIG_LIB_API int get_c();
		FIG_LIB_API int get_d();
		FIG_LIB_API int get_A();
		FIG_LIB_API int get_B();
		FIG_LIB_API int get_C();
		FIG_LIB_API int get_D();
		FIG_LIB_API std::string get_name();
	};
}