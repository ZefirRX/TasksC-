#include "square.h"

Square::Square(double a)
    : Rectangle(a, a) {}

const char* Square::name() const {
    return "Квадрат";
}
