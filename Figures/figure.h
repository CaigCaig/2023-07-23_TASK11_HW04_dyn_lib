#pragma once

#ifndef FIGURESLIBRARYDYNAMIC_EXPORTS
#define FIGURESLIBRARY_API __declspec(dllexport)
#else
#define FIGURESLIBRARY_API __declspec(dllimport)
#endif

namespace Figures
{
	class Figure {
	protected:
		int sides_count, a, b, c, d, A, B, C, D;
		std::string name;
	public:
		FIGURESLIBRARY_API int get_sides();
		FIGURESLIBRARY_API int get_a();
		FIGURESLIBRARY_API int get_b();
		FIGURESLIBRARY_API int get_c();
		FIGURESLIBRARY_API int get_d();
		FIGURESLIBRARY_API int get_A();
		FIGURESLIBRARY_API int get_B();
		FIGURESLIBRARY_API int get_C();
		FIGURESLIBRARY_API int get_D();
		FIGURESLIBRARY_API std::string get_name();
	};
}