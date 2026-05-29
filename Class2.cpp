#include <iostream>
#include <string>

class Counter {
private:
    int value;

public:
    Counter() : value(1) {}
    Counter(int initialValue) : value(initialValue) {}

    void increment() { value++; }
    void decrement() { value--; }
    int getValue() const { return value; }
};

int main() {
    std::string answer;
    Counter* counter;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет : ";
    std::cin >> answer;

    if (answer == "да") {
        int initialValue;
        std::cout << "Введите начальное значение счётчика : ";
        std::cin >> initialValue;
        counter = new Counter(initialValue);
    }
    else {
        counter = new Counter();
    }

    char command;
    while (true) {
        std::cout << "Введите команду('+', '-', '=' или 'x') : ";
        std::cin >> command;

        if (command == '+') {
            counter->increment();
        }
        else if (command == '-') {
            counter->decrement();
        }
        else if (command == '=') {
            std::cout << counter->getValue() << std::endl;
        }
        else if (command == 'x') {
            std::cout << "До свидания!" << std::endl;
            break;
        }
        else {
            std::cout << "Неизвестная команда. Используйте '+', '-', '=' или 'x'." << std::endl;
        }
    }

    delete counter;
    return 0;
}