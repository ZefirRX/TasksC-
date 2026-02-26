#include <iostream>
#include <string>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "ЗАДАНИЕ №1" << std::endl;
    int number1, result1 = 0;
    do{
        std::cout << "Введите целое число или число '0', чтобы закончить: " << std::endl;
        std::cin >> number1;
        result1 += number1;
    } while (number1 != 0);
    std::cout << "Сумма чисел: "<< result1 << std::endl;

    std::cout << "ЗАДАНИЕ №2" << std::endl;
    int number2, result2 = 0;
    std::cout << "Введите целое число: " << std::endl;
    std::cin >> number2;
    do {
        result2 += number2 % 10;
        number2 = number2 / 10;
    } while (number2 != 0);
    std::cout << "Сумма цифр: " << result2 << std::endl;

    std::cout << "ЗАДАНИЕ №3" << std::endl;
    int number3, result3 = 0;
    std::cout << "Введите целое число:\n";
    std::cin >> number3;
    for (int i = 1; i <= 10; i++) {
        result3 = i * number3;
        std::cout << number3 << " x " << i << " = " << result3 << std::endl;
    }
    return 0;
}
