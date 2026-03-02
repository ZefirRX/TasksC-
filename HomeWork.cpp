#include <iostream>
#include <string>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "ЗАДАНИЕ №1" << std::endl;
    int array1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    for (int i = 0; i < 10; i++) {
        std::cout << array1[i];
        if (i < 9) {
            std::cout << ", ";
        }
    }
    std::cout<<std::endl;

    std::cout << "ЗАДАНИЕ №2" << std::endl;
    int max1, min1;
    int array2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    max1 = array2[0];
    min1 = array2[0];
    std::cout << "Массив: ";
    for (int i = 0; i < 10; i++) {
        std::cout << array2[i] << " ";
        if (array2[i] < min1) { min1 = array2[i]; }
        if (array2[i] > max1) { max1 = array2[i]; }
    }
    std::cout << std::endl << "Минимальный элемент: " << min1 << std::endl 
              << "Максимальный элемент: " << max1 << std::endl;

    std::cout << "ЗАДАНИЕ №3" << std::endl;
    int array3[3][6] = { {1, 2, 3, 4, 5, 6}, {7, 8, 99, 9, 10, 11}, { 0, 12, 13, 14 ,15, 16 } };
    int rows = 3; int indexRowsMax = 0, int indexRowsMin = 0;
    int coloums = 6; int indexColoumsMax = 0, int indexColoumsMin = 0;
    int Min = array3[0][0]; int Max = array3[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < coloums; j++) {
            std::cout << array3[i][j] << "\t";
            if (Min > array3[i][j]) { indexRowsMin = i; indexColoumsMin = j; Min = array3[i][j]; }
            if (Max < array3[i][j]) { indexRowsMax = i; indexColoumsMax = j; Max = array3[i][j]; }
        }
        std::cout << std::endl;
    }
    std::cout << "Индекс минимального элемента: " << indexRowsMin << " " << indexColoumsMin<< std::endl 
              << "Индекс максимального элемента: " << indexRowsMax << " " << indexColoumsMax << std::endl;

    std::cout << "ЗАДАНИЕ №4" << std::endl;
    int array4[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int Passes = 10;
    int temp = 0;
    std::cout << "Массив до сортировки:";
    for (int i = 0; i < 10; i++) { std::cout << array4[i] << " "; }
    std::cout << std::endl;
    do {
        for (int i = 9; i > 0; i--) {
            if (array4[i] < array4[i-1]) {
                temp = array4[i - 1];
                array4[i - 1] = array4[i];
                array4[i] = temp;
            }
        }
        Passes--;
    } while (Passes >= 1);
    std::cout << "Массив после сортировки: ";
    for (int number : array4) { std::cout << number << " "; }
    return 0;
}
