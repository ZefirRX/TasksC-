#include "isosceles_triangle.h"

IsoscelesTriangle::IsoscelesTriangle(double a, double b, double A, double B)
    : Triangle(a, b, a, A, B, A) {}

const char* IsoscelesTriangle::name() const {
    return "Равнобедренный треугольник";
}
