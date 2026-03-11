#include <iostream>
namespace math {
    namespace sum {
        int calc(int x, int y) {
            std::cout << "Сложение: " << x + y << std::endl;
            return 1;
        }
    }
    namespace sub {
        int calc(int x, int y) {
            std::cout << "Вычитание: " << x - y << std::endl;
            return 1;
        }
    }
    namespace mult {
        int calc(int x, int y) {
            std::cout << "Умножение: " << x * y << std::endl;
            return 1;
        }
    }
    namespace divis {
        int calc(int x, int y) {
            std::cout << "Деление: " << x / y << std::endl;
            return 1;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "rus");
    std::cout << "x = 6, y = 9" << std::endl;
    math::sum::calc(6, 9);
    math::sub::calc(6, 9);
    math::mult::calc(6, 9);
    math::divis::calc(6, 9);
    return 0;
}

