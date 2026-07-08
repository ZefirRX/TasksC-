#include "equilateral_triangle.h"

EquilateralTriangle::EquilateralTriangle(double a)
    : IsoscelesTriangle(a, a, 60.0, 60.0) {}

const char* EquilateralTriangle::name() const {
    return "Равносторонний треугольник";
}
