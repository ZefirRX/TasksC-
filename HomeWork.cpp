#include <iostream>

int main()
{
    setlocale(LC_CTYPE, "rus");
    int UserNum;
    std::cout << "Введите число:\n";
    std::cin >> UserNum;
    std::cout <<"Вы ввели:\n" << UserNum;
    return 0;
}
