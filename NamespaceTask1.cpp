#include <iostream>

void counting_function();;

int main()
{
    setlocale(LC_ALL, "rus");
    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }
}

void counting_function() {
    static int temp = 1;
    std::cout << "Количество вызовов функции counting_function(): " << temp << std::endl;
    ++temp;
}
