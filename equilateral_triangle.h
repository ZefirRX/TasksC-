#ifndef EQUILATERAL_TRIANGLE_H
#define EQUILATERAL_TRIANGLE_H

#include "isosceles_triangle.h"

class EquilateralTriangle : public IsoscelesTriangle {
public:
    explicit EquilateralTriangle(double a);

    const char* name() const override;
};

#endif // EQUILATERAL_TRIANGLE_H
