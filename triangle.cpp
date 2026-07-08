#include "triangle.h"

Triangle::Triangle(double a, double b, double c, double A, double B, double C)
    : a_(a), b_(b), c_(c), A_(A), B_(B), C_(C) {}

double Triangle::get_a() const { return a_; }
double Triangle::get_b() const { return b_; }
double Triangle::get_c() const { return c_; }
double Triangle::get_A() const { return A_; }
double Triangle::get_B() const { return B_; }
double Triangle::get_C() const { return C_; }

const char* Triangle::name() const {
    return "Треугольник";
}
