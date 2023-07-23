#include <iostream>
#include <Windows.h>
#include <string>
#include "triangle.h"
#include "r_triangle.h"
#include "i_triangle.h"
#include "e_triangle.h"
#include "quadrangle.h"
#include "rectangle.h"
#include "square.h"
#include "parallelogram.h"
#include "rhomb.h"
#include "funcs.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Figures::Triangle triangle{ 10, 20, 30, 50, 60, 70 };				// Треугольник
	Figures::R_triangle r_triangle{ 10, 20, 30, 50, 60 };				// Прямоугольный треугольник
	Figures::I_triangle i_triangle{ 10, 20, 50, 60 };					// Равнобедренный треугольник
	Figures::E_triangle e_triangle{ 30 };								// Равносторонний треугольник
	Figures::Quadrangle quadrangle{ 10, 20, 30, 40, 50, 60, 70, 80 };	// Четырёхугольник
	Figures::Rectangle_ rectangle{ 10, 20 };								// Прямоугольник
	Figures::Square square{ 20 };										// Квадрат
	Figures::Parallelogram parallelogram{ 20, 30, 30, 40 };				// Параллелограмм
	Figures::Rhomb rhomb{ 30, 30, 40 };									// Ромб

	print_info(&triangle);
	print_info(&r_triangle);
	print_info(&i_triangle);
	print_info(&e_triangle);
	print_info(&quadrangle);
	print_info(&rectangle);
	print_info(&square);
	print_info(&parallelogram);
	print_info(&rhomb);
	system("pause");
}