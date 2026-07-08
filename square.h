#ifndef SQUARE_H
#define SQUARE_H

#include "rectangle.h"

class Square : public Rectangle {
public:
    explicit Square(double a);

    const char* name() const override;
};

#endif // SQUARE_H
