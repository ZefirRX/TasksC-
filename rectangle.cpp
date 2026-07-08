#include "rectangle.h"

Rectangle::Rectangle(double a, double b)
    : Parallelogram(a, b, 90.0, 90.0) {}

const char* Rectangle::name() const {
    return "Прямоугольник";
}
