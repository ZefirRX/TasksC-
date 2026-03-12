#include <iostream>
void print(int* num, int size);
int main()
{
    setlocale(LC_ALL, "rus");
    int arr0[] = { 1, 5, 3, 6 };
    int arr1[] = { 1, 7 };
    int arr2[] = { 1, 3, 5, 7, 12};
    print(arr0, 4);
    print(arr1, 2);
    print(arr2, 5);
    return 0;
}

void print(int* num, int size) {
    for (int i = 0; i < size; i++) { std::cout << num[i] << " "; }
    std::cout << std::endl;
}