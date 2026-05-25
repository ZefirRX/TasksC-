#include <iostream>
#include <Windows.h>

struct Bank
{
    int Number{};
    std::string Name = "";
    float SumMoney{};
};

float NewBalance (Bank& User, float NewBalance);

int main() {
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Bank User;
    float changeBalance;

    std::cout << "Введите номер счёта: ";
    std::cin >> User.Number;
    std::cout << "Введите имя владельца: ";
    std::cin >> User.Name;
    std::cout << "Введите баланс: ";
    std::cin >> User.SumMoney;
    std::cout << "Введите новый баланс: ";
    std::cin >> changeBalance;
    NewBalance(User, changeBalance);


    std::cout << "Ваш счёт: " << User.Name << ", " 
              << User.Number << ", " << User.SumMoney;

    return 0;
}

float NewBalance(Bank& User, float changeBalance)
{
    User.SumMoney = changeBalance;
    return 0;
}