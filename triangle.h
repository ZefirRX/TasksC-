#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
public:
    Triangle(double a, double b, double c, double A, double B, double C);
    virtual ~Triangle() = default;

    double get_a() const;
    double get_b() const;
    double get_c() const;
    double get_A() const;
    double get_B() const;
    double get_C() const;

    virtual const char* name() const;

protected:
    double a_;
    double b_;
    double c_;
    double A_;
    double B_;
    double C_;
};

#endif // TRIANGLE_H
