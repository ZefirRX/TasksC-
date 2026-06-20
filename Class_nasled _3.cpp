#include <iostream>
#include <string>

class Figure {
protected:
    int sides_count = 0;

public:
    virtual ~Figure() = default;

    virtual std::string get_name() const { return "Фигура"; }

    virtual bool check() const {
        return sides_count == 0;
    }

    virtual void print_info() const {
        std::cout << get_name() << ":\n";
        std::cout << (check() ? "Правильная" : "Неправильная") << "\n";
        std::cout << "Количество сторон: " << sides_count << "\n";
    }
};

class Triangle : public Figure {
protected:
    double a, b, c;
    double A, B, C;

public:
    Triangle(double a, double b, double c, double A, double B, double C)
        : a(a), b(b), c(c), A(A), B(B), C(C) {
        sides_count = 3;
    }

    double get_a() const { return a; }
    double get_b() const { return b; }
    double get_c() const { return c; }
    double get_A() const { return A; }
    double get_B() const { return B; }
    double get_C() const { return C; }

    std::string get_name() const override { return "Треугольник"; }

    bool check() const override {
        /*Базовый класс Figure проверяет sides_count == 0, что для
        треугольника не выполняется, поэтому базовую версию не вызываем.*/
        return (A + B + C) == 180;
    }

    void print_info() const override {
        Figure::print_info();
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

    bool check() const override {
        return Triangle::check() && (C == 90);
    }
};

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(double a, double b, double A, double B)
        : Triangle(a, b, a, A, B, A) {
    }

    std::string get_name() const override { return "Равнобедренный треугольник"; }

    bool check() const override {
        return Triangle::check() && (a == c) && (A == C);
    }
};

class EquilateralTriangle : public IsoscelesTriangle {
public:
    explicit EquilateralTriangle(double a)
        : IsoscelesTriangle(a, a, 60, 60) {
    }

    std::string get_name() const override { return "Равносторонний треугольник"; }

    bool check() const override {
        return IsoscelesTriangle::check() && (a == b) && (A == 60) && (B == 60) && (C == 60);
    }
};


class Quadrilateral : public Figure {
protected:
    double a, b, c, d;
    double A, B, C, D;

public:
    Quadrilateral(double a, double b, double c, double d,
        double A, double B, double C, double D)
        : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {
        sides_count = 4;
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

    bool check() const override {
        return (A + B + C + D) == 360;
    }

    void print_info() const override {
        Figure::print_info();
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

    bool check() const override {
        return Quadrilateral::check() && (a == c) && (b == d) && (A == C) && (B == D);
    }
};

class Rectangle : public Parallelogram {
public:
    Rectangle(double a, double b)
        : Parallelogram(a, b, 90, 90) {
    }

    std::string get_name() const override { return "Прямоугольник"; }

    bool check() const override {
        return Parallelogram::check() && (A == 90) && (B == 90) && (C == 90) && (D == 90);
    }
};

class Rhombus : public Parallelogram {
public:
    Rhombus(double a, double A, double B)
        : Parallelogram(a, a, A, B) {
    }

    std::string get_name() const override { return "Ромб"; }

    bool check() const override {
        return Parallelogram::check() && (a == b) && (b == c) && (c == d);
    }
};

class Square : public Rectangle {
public:
    explicit Square(double a)
        : Rectangle(a, a) {
    }

    std::string get_name() const override { return "Квадрат"; }

    bool check() const override {
        return Rectangle::check() && (a == b) && (b == c) && (c == d);
    }
};

int main() {
    std::setlocale(LC_ALL, "RU");
    Figure figure;
    Triangle triangle(10, 20, 30, 50, 60, 70);
    RightTriangle right_triangle_bad(10, 20, 30, 50, 60);
    RightTriangle right_triangle_good(10, 20, 30, 50, 40);
    IsoscelesTriangle isosceles_triangle(10, 20, 50, 60);
    EquilateralTriangle equilateral_triangle(30);

    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rectangle(10, 20);
    Square square(20);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rhombus rhombus(30, 30, 40);

    Figure* shapes[] = {
        &figure, &triangle, &right_triangle_bad, &right_triangle_good,
        &isosceles_triangle, &equilateral_triangle,
        &quadrilateral, &rectangle, &square, &parallelogram, &rhombus
    };

    for (const Figure* shape : shapes) {
        shape->print_info();
        std::cout << "\n";
    }

    return 0;
}
