#include <iostream>
#include <vector>

unsigned long long fib(int n, std::vector<unsigned long long>& memo, std::vector<bool>& known) {
    if (n <= 1) {
        return n;
    }
    if (known[n]) {
        return memo[n];
    }
    memo[n] = fib(n - 1, memo, known) + fib(n - 2, memo, known);
    known[n] = true;
    return memo[n];
}

int main() {
    int n;
    std::cout << "Введите n: ";
    std::cin >> n;
    if (n < 0) {
        std::cout << "n должно быть неотрицательным" << std::endl;
        return 1;
    }
    std::vector<unsigned long long> memo(n + 1, 0);
    std::vector<bool> known(n + 1, false);
    std::cout << "fib(" << n << ") = " << fib(n, memo, known) << std::endl;
    return 0;
}
