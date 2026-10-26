#include <iostream>
#include <utility>

void quick_sort(int* arr, int size) {
    if (size < 2) return;

    int pivot = arr[size / 2];
    int i = 0, j = size - 1;

    while (i <= j) {
        while (arr[i] < pivot) ++i;
        while (arr[j] > pivot) --j;
        if (i <= j) {
            std::swap(arr[i], arr[j]);
            ++i;
            --j;
        }
    }

    // после разделения: [0..j] и [i..size-1]
    quick_sort(arr, j + 1);
    quick_sort(arr + i, size - i);
}

void print_array(const int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << (i + 1 < size ? " " : "");
    }
    std::cout << std::endl;
}

int main() {
    int a1[] = {3, 43, 38, 29, 18, 72, 57, 61, 2, 33};
    int a2[] = {88, 91, 87, 59, 53, 49, 29, 16, 4, 27, 28, 89, 2, 25, 74};
    int a3[] = {24, 66, 20, 79, 30, 16, 19, 62, 94, 59, 0, 7, 59, 90, 84, 60, 95, 62};

    int* arrays[] = {a1, a2, a3};
    int sizes[] = {
        sizeof(a1) / sizeof(a1[0]),
        sizeof(a2) / sizeof(a2[0]),
        sizeof(a3) / sizeof(a3[0])
    };

    for (int t = 0; t < 3; ++t) {
        std::cout << "Исходный массив: ";
        print_array(arrays[t], sizes[t]);
        quick_sort(arrays[t], sizes[t]);
        std::cout << "Отсортированный массив: ";
        print_array(arrays[t], sizes[t]);
        std::cout << std::endl;
    }
    return 0;
}
