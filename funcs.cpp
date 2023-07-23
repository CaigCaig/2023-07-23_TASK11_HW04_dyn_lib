#include <iostream>
#include "figure.h"
#include "funcs.h"

void print_info(Figures::Figure* p) {
	std::cout << p->get_name() << ":" << std::endl;
	switch (p->get_sides()) {
	case 3:
		std::cout << "Стороны: a=" << p->get_a() << " b=" << p->get_b() << " c=" << p->get_c() << std::endl;
		std::cout << "Углы: A=" << p->get_A() << " B=" << p->get_B() << " C=" << p->get_C() << std::endl;
		break;
	case 4:
		std::cout << "Стороны: a=" << p->get_a() << " b=" << p->get_b() << " c=" << p->get_c() << " d=" << p->get_d() << std::endl;
		std::cout << "Углы: A=" << p->get_A() << " B=" << p->get_B() << " C=" << p->get_C() << " D=" << p->get_D() << std::endl;
		break;
	}
	std::cout << std::endl;
}