#include <iostream>
#define MODE 1
#ifndef MODE
	#error MODE not defined
#endif


#if MODE == 1
void add()
{
	int num1, num2;
	std::cout << "Введите число 1: ";
	std::cin >> num1;
	std::cout << "Введите число 2: ";
	std::cin >> num2;
	std::cout << "Результат сложения: " << num1 + num2;
}
#endif

int main()
{
std::setlocale(LC_ALL, "rus");
#if MODE == 0
	std::cout << "Работаю в боевом режиме";
#elif MODE == 1
	add();
#else 
	std::cout << "Неизвестный режим. Завершение работы.";
#endif
}