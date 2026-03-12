#include <iostream>
void swap(int* a, int* b);

int main()
{
    setlocale(LC_ALL, "rus");
    int a = 5;
    int b = 8;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(&a, &b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    return 0;
}

void swap(int* a, int* b) {
    int temp{};
    temp = *b;
    *b = *a;
    *a = temp;
}