#ifndef QUADRILATERAL_H
#define QUADRILATERAL_H

class Quadrilateral {
public:
    Quadrilateral(double a, double b, double c, double d,
                  double A, double B, double C, double D);
    virtual ~Quadrilateral() = default;

    double get_a() const;
    double get_b() const;
    double get_c() const;
    double get_d() const;
    double get_A() const;
    double get_B() const;
    double get_C() const;
    double get_D() const;

    virtual const char* name() const;

protected:
    double a_;
    double b_;
    double c_;
    double d_;
    double A_;
    double B_;
    double C_;
    double D_;
};

#endif // QUADRILATERAL_H
