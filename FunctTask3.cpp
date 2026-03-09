﻿#include <iostream>

int Fibbonacci(int num) {
	if (num == 0) return 0;
	else if (num == 1) return 1;
	else return Fibbonacci(num - 1) + Fibbonacci(num - 2);
}

int main() {
	setlocale(LC_ALL, "RU");

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