#include <iostream>
#include <string>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string userword, progword;
    progword = "малина";
    do {
        std::cout << "Угадайте слово: ";
        std::cin >> userword;
        if (userword == progword) 
        { 
            std::cout << "Правильно! Вы победили! Загаданное слово — " << progword;
        }
        else
        {
            std::cout << "Неправильно" << std::endl;
        }
    } while (progword != userword);

    return 0;
}
