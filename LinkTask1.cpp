#include <iostream>

int main() {
	setlocale(LC_ALL, "RU");
	int integer1 = 18;
	short short1 = 1;
	long long1 = 15;
	long long longlong1 = 133;
	float float1 = 15.0;
	double double1 = 13.5;
	long double longdouble1 = 12.0;
	bool bool1 = 1;

	std::cout << "short: " << &short1 << " " << sizeof(short1) << std::endl;
	std::cout << "int: " << &integer1 << " " << sizeof(integer1) << std::endl;
	std::cout << "long: " << &long1 << " " << sizeof(short1) << std::endl;
	std::cout << "long long: " << &longlong1 << " " << sizeof(longlong1) << std::endl;
	std::cout << "float: " << &float1 << " " << sizeof(float1) << std::endl;
	std::cout << "double: " << &double1 << " " << sizeof(double1) << std::endl;
	std::cout << "long double: " << &longdouble1 << " " << sizeof(longdouble1) << std::endl;
	std::cout << "bool: " << &bool1 << " " << sizeof(bool1) << std::endl;

		//bool : 007DF8C7 1
		return 0;
}