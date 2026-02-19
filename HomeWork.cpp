#include <iostream>

int main() {
    std::cout << std::boolalpha; // вывод true||false
    setlocale(LC_ALL, "RU");
    bool Meaning1, Meaning2, result1;
    std::cout << "ЗАДАНИЕ 1 НА ВЫВОД ТАБЛИЦЫ ИСТИННОСТИ" << std::endl;

    std::cout << "Оператор: ||" << std::endl;
    Meaning1 = true;  Meaning2 = true;
    result1 = (Meaning1 || Meaning2) ? true : false;
    std::cout << Meaning1 << "\t" << Meaning2 << "\t" << result1 << std::endl;

    Meaning1 = false; Meaning2 = true;
    result1 = (Meaning1 || Meaning2) ? true : false;
    std::cout << Meaning1 << "\t" << Meaning2 << "\t" << result1 << std::endl;

    Meaning1 = true;  Meaning2 = false;
    result1 = (Meaning1 || Meaning2) ? true : false;
    std::cout << Meaning1 << "\t" << Meaning2 << "\t" << result1 << std::endl;

    Meaning1 = false; Meaning2 = false;
    result1 = (Meaning1 || Meaning2) ? true : false;
    std::cout << Meaning1 << "\t" << Meaning2 << "\t" << result1 << std::endl;

    std::cout << "\nОператор: &&" << std::endl;
    Meaning1 = true;  Meaning2 = true;
    result1 = (Meaning1 && Meaning2) ? true : false;
    std::cout << Meaning1 << "\t" << Meaning2 << "\t" << result1 << std::endl;

    Meaning1 = false; Meaning2 = true;
    result1 = (Meaning1 && Meaning2) ? true : false;
    std::cout << Meaning1 << "\t" << Meaning2 << "\t" << result1 << std::endl;

    Meaning1 = true;  Meaning2 = false;
    result1 = (Meaning1 && Meaning2) ? true : false;
    std::cout << Meaning1 << "\t" << Meaning2 << "\t" << result1 << std::endl;

    Meaning1 = false; Meaning2 = false;
    result1 = (Meaning1 && Meaning2) ? true : false;
    std::cout << Meaning1 << "\t" << Meaning2 << "\t" << result1 << std::endl << std::endl;

    std::cout << "ЗАДАНИЕ 2 НА УПОРЯДОВАЧИВАНИЕ ЧИСЕЛ" << std::endl;

    int number1, number2, number3, answer1, answer2, answer3;
    std::cout << "Введите первое число: "; std::cin >> number1;
    std::cout << "Введите второе число: "; std::cin >> number2;
    std::cout << "Введите третье число: "; std::cin >> number3;

    answer1 = number1 > number2
        ? number1 > number3
        ? number1 : number3
        : number2 > number3
        ? number2 : number3;

    answer2 =
        ((number1 >= number2 && number1 <= number3) || (number1 >= number3 && number1 <= number2))
        ? number1 : ((number2 >= number1 && number2 <= number3) || (number2 <= number1 && number2 >= number3))
        ? number2 : number3;

    answer3 = number1 < number2
        ? number1 < number3
        ? number1 : number3
        : number2 < number3
        ? number2 : number3;

    std::cout << answer1 << "\t" << answer2 << "\t" << answer3 << std::endl;
    return 0;
}