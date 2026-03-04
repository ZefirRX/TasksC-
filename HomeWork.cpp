#include <iostream>

int sum(int a, int b) { int s = a + b; return s; }
int diff(int a, int b) { int dif = a - b; return dif; }
int multiplication(int a, int b) { int mult = a * b; return mult; }
double  division(int a, int b) { double div = a / b; return div; }

void Pow(int value, int power, int result) {
	for (int i = 0; i < power; i++) {
		result *= value;
	}
	std::cout << value << " в степени " << power << " = " << result << std::endl;
}

int Fibbonacci(int num) {
	if (num == 0) return 0;
	else if (num == 1) return 1;
	else return Fibbonacci(num - 1) + Fibbonacci(num - 2);
} 

int main() {
	setlocale(LC_ALL, "RU");

	std::cout << "Task1" << std::endl;

	int a = 5, b = 10;
	int s = sum(a, b);
	int dif = diff(a, b);
	int mult = multiplication(a, b);
	double div = division(a, b);
	std::cout << a << " + " << b << " = " << s << std::endl;
	std::cout << a << " - " << b << " = " << dif << std::endl;
	std::cout << a << " * " << b << " = " << mult << std::endl;
	std::cout << a << " / " << b << " = " << div << std::endl;

	std::cout << "Task2" << std::endl;
	int value = 5, power = 2, result = 1;
	Pow(value, power, result);
	value = 3; power = 3; result = 1;
	Pow(value, power, result);
	value = 4; power = 4; result = 1;
	Pow(value, power, result);

	std::cout << "Task3" << std::endl;
	int FibonacciNums;
	std::cout << "Введите число: ";
	std::cin >> FibonacciNums;
	std::cout << "Числа Фибоначчи: ";
	for (int num = 0; num < FibonacciNums; num++) {
		std::cout << Fibbonacci(num) << " ";
	}
	return 0;
}