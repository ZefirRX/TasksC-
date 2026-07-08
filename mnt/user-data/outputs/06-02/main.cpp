#include <iostream>
#include <string>
#include "counter.h"

int main() {
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

    return 0;
}
