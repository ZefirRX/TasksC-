#include <iostream>
#include <string>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string name, lastname, fullname;
    std::cout << "Введите имя: ";
    std::cin >>  name;
    std::cout << "Введите фамилию: ";
    std::cin >> lastname;
    fullname = name + " " + lastname;
    std::cout << "Здравствуйте, " << fullname << "!";
    return 0;
}
