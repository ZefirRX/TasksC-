#include "quadrilateral.h"

Quadrilateral::Quadrilateral(double a, double b, double c, double d,
                              double A, double B, double C, double D)
    : a_(a), b_(b), c_(c), d_(d), A_(A), B_(B), C_(C), D_(D) {}

double Quadrilateral::get_a() const { return a_; }
double Quadrilateral::get_b() const { return b_; }
double Quadrilateral::get_c() const { return c_; }
double Quadrilateral::get_d() const { return d_; }
double Quadrilateral::get_A() const { return A_; }
double Quadrilateral::get_B() const { return B_; }
double Quadrilateral::get_C() const { return C_; }
double Quadrilateral::get_D() const { return D_; }

const char* Quadrilateral::name() const {
    return "Четырёхугольник";
}
