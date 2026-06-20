#include <iostream>
#include <string>
class Figure {
public:
    virtual ~Figure() = default;

    virtual std::string get_name() const = 0;
    virtual void print_details() const = 0;
};

class Triangle : public Figure {
protected:
    double a, b, c;       // стороны
    double A, B, C;       // углы

public:
    Triangle(double a, double b, double c, double A, double B, double C)
        : a(a), b(b), c(c), A(A), B(B), C(C) {
    }

    double get_a() const { return a; }
    double get_b() const { return b; }
    double get_c() const { return c; }
    double get_A() const { return A; }
    double get_B() const { return B; }
    double get_C() const { return C; }

    std::string get_name() const override { return "Треугольник"; }

    void print_details() const override {
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << "\n";
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << "\n";
    }
};

class RightTriangle : public Triangle {
public:
    RightTriangle(double a, double b, double c, double A, double B)
        : Triangle(a, b, c, A, B, 90) {
    }

    std::string get_name() const override { return "Прямоугольный треугольник"; }
};

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(double a, double b, double A, double B)
        : Triangle(a, b, a, A, B, A) {
    }

    std::string get_name() const override { return "Равнобедренный треугольник"; }
};

class EquilateralTriangle : public IsoscelesTriangle {
public:
    explicit EquilateralTriangle(double a)
        : IsoscelesTriangle(a, a, 60, 60) {
    }

    std::string get_name() const override { return "Равносторонний треугольник"; }
};

class Quadrilateral : public Figure {
protected:
    double a, b, c, d;       // стороны
    double A, B, C, D;       // углы

public:
    Quadrilateral(double a, double b, double c, double d,
        double A, double B, double C, double D)
        : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {
    }

    double get_a() const { return a; }
    double get_b() const { return b; }
    double get_c() const { return c; }
    double get_d() const { return d; }
    double get_A() const { return A; }
    double get_B() const { return B; }
    double get_C() const { return C; }
    double get_D() const { return D; }

    std::string get_name() const override { return "Четырёхугольник"; }

    void print_details() const override {
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << "\n";
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << "\n";
    }
};

class Parallelogram : public Quadrilateral {
public:
    Parallelogram(double a, double b, double A, double B)
        : Quadrilateral(a, b, a, b, A, B, A, B) {
    }

    std::string get_name() const override { return "Параллелограмм"; }
};

class Rectangle : public Parallelogram {
public:
    Rectangle(double a, double b)
        : Parallelogram(a, b, 90, 90) {
    }

    std::string get_name() const override { return "Прямоугольник"; }
};

class Rhombus : public Parallelogram {
public:
    Rhombus(double a, double A, double B)
        : Parallelogram(a, a, A, B) {
    }

    std::string get_name() const override { return "Ромб"; }
};

class Square : public Rectangle {
public:
    explicit Square(double a)
        : Rectangle(a, a) {
    }

    std::string get_name() const override { return "Квадрат"; }
};

void print_info(const Figure* fig) {
    std::cout << fig->get_name() << ":\n";
    fig->print_details();
    std::cout << "\n";
}

int main() {
    std::setlocale(LC_ALL, "RU");
    Triangle triangle(10, 20, 30, 50, 60, 70);
    RightTriangle right_triangle(10, 20, 30, 50, 60);
    IsoscelesTriangle isosceles_triangle(10, 20, 50, 60);
    EquilateralTriangle equilateral_triangle(30);

    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rectangle(10, 20);
    Square square(20);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rhombus rhombus(30, 30, 40);

    print_info(&triangle);
    print_info(&right_triangle);
    print_info(&isosceles_triangle);
    print_info(&equilateral_triangle);

    print_info(&quadrilateral);
    print_info(&rectangle);
    print_info(&square);
    print_info(&parallelogram);
    print_info(&rhombus);

    return 0;
}
