#include <iostream>
#include "math_functions.h"

int main() {
    double first = 0.0;
    double second = 0.0;
    int operation = 0;

    std::cout << "Введите первое число: ";
    std::cin >> first;

    std::cout << "Введите второе число: ";
    std::cin >> second;

    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
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

    return 0;
}
