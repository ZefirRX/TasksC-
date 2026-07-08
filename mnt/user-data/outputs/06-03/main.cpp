#include <iostream>

#include "triangle.h"
#include "right_triangle.h"
#include "isosceles_triangle.h"
#include "equilateral_triangle.h"

#include "quadrilateral.h"
#include "parallelogram.h"
#include "rectangle.h"
#include "rhombus.h"
#include "square.h"

#include "shapes_print.h"

int main() {
    Triangle triangle(10, 20, 30, 50, 60, 70);
    RightTriangle right_triangle(10, 20, 30, 50, 60);
    IsoscelesTriangle isosceles_triangle(10, 20, 50, 60);
    EquilateralTriangle equilateral_triangle(30);

    print_info(&triangle);
    std::cout << std::endl;
    print_info(&right_triangle);
    std::cout << std::endl;
    print_info(&isosceles_triangle);
    std::cout << std::endl;
    print_info(&equilateral_triangle);
    std::cout << std::endl;

    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rectangle(10, 20);
    Square square(20);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rhombus rhombus(30, 30, 40);

    print_info(&quadrilateral);
    std::cout << std::endl;
    print_info(&rectangle);
    std::cout << std::endl;
    print_info(&square);
    std::cout << std::endl;
    print_info(&parallelogram);
    std::cout << std::endl;
    print_info(&rhombus);

    return 0;
}
