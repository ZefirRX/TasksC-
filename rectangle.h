#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "parallelogram.h"

class Rectangle : public Parallelogram {
public:
    Rectangle(double a, double b);

    const char* name() const override;
};

#endif // RECTANGLE_H
