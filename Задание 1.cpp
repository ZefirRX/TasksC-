#include <iostream>

unsigned long long fib(int n) {
    if (n <= 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    std::cout << "Введите n: ";
    std::cin >> n;
    if (n < 0) {
        std::cout << "n должно быть неотрицательным" << std::endl;
        return 1;
    }
    std::cout << "fib(" << n << ") = " << fib(n) << std::endl;
    return 0;
}
