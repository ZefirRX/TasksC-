#include "shapes_print.h"
#include <iostream>

void print_info(const Triangle* shape) {
    std::cout << shape->name() << ":" << std::endl;
    std::cout << "Стороны: a=" << shape->get_a()
               << " b=" << shape->get_b()
               << " c=" << shape->get_c() << std::endl;
    std::cout << "Углы: A=" << shape->get_A()
               << " B=" << shape->get_B()
               << " C=" << shape->get_C() << std::endl;
}

void print_info(const Quadrilateral* shape) {
    std::cout << shape->name() << ":" << std::endl;
    std::cout << "Стороны: a=" << shape->get_a()
               << " b=" << shape->get_b()
               << " c=" << shape->get_c()
               << " d=" << shape->get_d() << std::endl;
    std::cout << "Углы: A=" << shape->get_A()
               << " B=" << shape->get_B()
               << " C=" << shape->get_C()
               << " D=" << shape->get_D() << std::endl;
}
