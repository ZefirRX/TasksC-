#include "parallelogram.h"

Parallelogram::Parallelogram(double a, double b, double A, double B)
    : Quadrilateral(a, b, a, b, A, B, A, B) {}

const char* Parallelogram::name() const {
    return "Параллелограмм";
}
