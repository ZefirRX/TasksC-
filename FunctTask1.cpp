#include <iostream>


int sum(int a, int b) { int s = a + b; return s; }
int diff(int a, int b) { int dif = a - b; return dif; }
int multiplication(int a, int b) { int mult = a * b; return mult; }
double  division(int a, int b) { double div = a / b; return div; }


int main() {
	setlocale(LC_ALL, "RU");

	int a = 5, b = 10;
	int s = sum(a, b);
	int dif = diff(a, b);
	int mult = multiplication(a, b);
	double div = division(a, b);
	std::cout << a << " + " << b << " = " << s << std::endl;
	std::cout << a << " - " << b << " = " << dif << std::endl;
	std::cout << a << " * " << b << " = " << mult << std::endl;
	std::cout << a << " / " << b << " = " << div << std::endl;
	}
	return 0;
}