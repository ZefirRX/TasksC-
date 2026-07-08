#ifndef RHOMBUS_H
#define RHOMBUS_H

#include "parallelogram.h"

class Rhombus : public Parallelogram {
public:
    Rhombus(double a, double A, double B);

    const char* name() const override;
};

#endif // RHOMBUS_H
