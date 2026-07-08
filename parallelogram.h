#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

#include "quadrilateral.h"

class Parallelogram : public Quadrilateral {
public:
    Parallelogram(double a, double b, double A, double B);

    const char* name() const override;
};

#endif // PARALLELOGRAM_H
