#include <iostream>
#include <string>

// ---- Часть 1: математические функции ----
#include "math_functions.h"

// ---- Часть 2: класс Counter ----
#include "counter.h"

// ---- Часть 3: иерархия фигур ----
#include "triangle.h"
#include "right_triangle.h"
#include "isosceles_triangle.h"
#include "equilateral_triangle.h"

#include "quadrilateral.h"
#include "parallelogram.h"
#include "rectangle.h"
#include "rhombus.h"
#include "square.h"

#include "shapes_print.h"

namespace {

void run_math_demo() {
    std::cout << "===== Задание 1: математические функции =====" << std::endl;

    double first = 0.0;
    double second = 0.0;
    int operation = 0;

    std::cout << "Введите первое число: ";
    std::cin >> first;

    std::cout << "Введите второе число: ";
    std::cin >> second;

    std::cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, "
                 "4 - деление, 5 - возведение в степень): ";
    std::cin >> operation;

    switch (operation) {
        case 1:
            std::cout << first << " + " << second << " = " << add(first, second) << std::endl;
            break;
        case 2:
            std::cout << first << " - " << second << " = " << subtract(first, second) << std::endl;
            break;
        case 3:
            std::cout << first << " * " << second << " = " << multiply(first, second) << std::endl;
            break;
        case 4:
            if (second == 0.0) {
                std::cout << "Деление на ноль невозможно." << std::endl;
            } else {
                std::cout << first << " / " << second << " = " << divide(first, second) << std::endl;
            }
            break;
        case 5:
            std::cout << first << " в степени " << second << " = " << power(first, second) << std::endl;
            break;
        default:
            std::cout << "Неизвестная операция." << std::endl;
            break;
    }
}

void run_counter_demo() {
    std::cout << std::endl << "===== Задание 2: класс Counter =====" << std::endl;

    std::string answer;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> answer;

    Counter counter;

    if (answer == "да") {
        int initial_value = 0;
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initial_value;
        counter = Counter(initial_value);
    }

    while (true) {
        char command = '\0';
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;

        if (command == '+') {
            counter.increment();
        } else if (command == '-') {
            counter.decrement();
        } else if (command == '=') {
            std::cout << counter.get_value() << std::endl;
        } else if (command == 'x') {
            std::cout << "До свидания!" << std::endl;
            break;
        } else {
            std::cout << "Неизвестная команда." << std::endl;
        }
    }
}

void run_shapes_demo() {
    std::cout << std::endl << "===== Задание 3: иерархия фигур =====" << std::endl;

    Triangle triangle(10, 20, 30, 50, 60, 70);
    RightTriangle right_triangle(10, 20, 30, 50, 60);
    IsoscelesTriangle isosceles_triangle(10, 20, 50, 60);
    EquilateralTriangle equilateral_triangle(30);

    print_info(&triangle);
    std::cout << std::endl;
    print_info(&right_triangle);
    std::cout << std::endl;
    print_info(&isosceles_triangle);
    std::cout << std::endl;
    print_info(&equilateral_triangle);
    std::cout << std::endl;

    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rectangle(10, 20);
    Square square(20);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rhombus rhombus(30, 30, 40);

    print_info(&quadrilateral);
    std::cout << std::endl;
    print_info(&rectangle);
    std::cout << std::endl;
    print_info(&square);
    std::cout << std::endl;
    print_info(&parallelogram);
    std::cout << std::endl;
    print_info(&rhombus);
}

}  // namespace

int main() {
    run_math_demo();
    run_counter_demo();
    run_shapes_demo();

    return 0;
}
