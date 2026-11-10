#include <iostream>
#include <string>

// sum(code[i] * p^i) mod n, все промежуточные значения берутся по модулю n,
// поэтому переполнения не происходит
long long real_string_hash(std::string s, long long p, long long n)
{
    unsigned long long hash = 0;
    unsigned long long power = 1 % n; // p^0
    unsigned long long mod = n;
    unsigned long long base = p % n;

    for (int i = 0; i < (int)s.length(); ++i)
    {
        unsigned long long code = (unsigned char)s[i];
        hash = (hash + (code % mod) * power) % mod;
        power = (power * base) % mod;
    }
    return (long long)hash;
}

int main()
{
    long long p = 0, n = 0;
    std::cout << "Введите p: ";
    std::cin >> p;
    std::cout << "Введите n: ";
    std::cin >> n;
    if (n <= 0)
    {
        std::cout << "n должно быть положительным" << std::endl;
        return 1;
    }
    std::cin.ignore(10000, '\n');

    std::string input;
    do
    {
        std::cout << "Введите строку: ";
        std::getline(std::cin, input);
        std::cout << "Хэш строки " << input << " = "
                  << real_string_hash(input, p, n) << std::endl;
    } while (input != "exit");

    return 0;
}
