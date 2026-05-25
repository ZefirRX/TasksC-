#include <iostream>
#include <Windows.h>

struct Addres 
{
    std::string City = "";
    std::string Street = "";
    int NumberHome{};
    int NumberApart{};
    int Index{};

};

void Print(Addres Home);

int main() {
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Addres Home1{ "Москва", "Космонавтов", 11, 255, 923798 };
    Addres Home2{ "Санкт-Петербург", "Подвойского", 9, 100, 578213 };
    Print(Home1);
    std::cout << std::endl;
    Print(Home2);
    return 0;
}

void Print(Addres Home)
{
    std::cout << "Город: \t" << Home.City << std::endl;
    std::cout << "Улица: \t" << Home.Street << std::endl;
    std::cout << "Номер дома: \t" << Home.NumberHome << std::endl;
    std::cout << "Квартира: \t" << Home.NumberApart << std::endl;
    std::cout << "Индекс: \t" << Home.Index << std::endl;
}


