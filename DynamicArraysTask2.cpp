#include <iostream>

double* create_array(int size);

int main() {
    setlocale(LC_ALL, "rus");
    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;
    double* array = create_array(size);
    std::cout << "Массив: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    delete[] array;
}

double* create_array(int size) {
    double* arr = new double[size]();
    return arr;
}