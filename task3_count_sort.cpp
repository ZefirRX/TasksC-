#include <iostream>

const int MIN_VALUE = 10;
const int MAX_VALUE = 24;

void count_sort(int* arr, int size) {
    int counts[MAX_VALUE - MIN_VALUE + 1] = {0};

    for (int i = 0; i < size; ++i) {
        ++counts[arr[i] - MIN_VALUE];
    }

    int k = 0;
    for (int v = MIN_VALUE; v <= MAX_VALUE; ++v) {
        for (int c = 0; c < counts[v - MIN_VALUE]; ++c) {
            arr[k++] = v;
        }
    }
}

void print_array(const int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << (i + 1 < size ? " " : "");
    }
    std::cout << std::endl;
}

int main() {
    int a1[] = {19, 14, 22, 22, 17, 22, 13, 21, 20, 24, 18, 10, 17, 16, 17, 20, 22, 11, 20, 16, 14, 13, 10, 22, 18, 14, 16, 24, 19, 17};
    int a2[] = {16, 17, 14, 20, 22, 20, 17, 22, 16, 19, 23, 24, 20, 22, 21, 18, 14, 16, 17, 21, 10, 11, 19, 23, 11, 11, 17, 17, 11, 21, 17, 11, 17, 16, 12, 11, 16, 22, 23, 16};
    int a3[] = {21, 15, 19, 18, 23, 12, 18, 18, 19, 23, 12, 20, 15, 22, 21, 18, 19, 20, 12, 16, 20, 14, 17, 13, 10, 23, 19, 14, 10, 22, 19, 12, 24, 23, 22, 15, 13, 22, 18, 18, 11, 23, 24, 17, 10};

    int* arrays[] = {a1, a2, a3};
    int sizes[] = {
        sizeof(a1) / sizeof(a1[0]),
        sizeof(a2) / sizeof(a2[0]),
        sizeof(a3) / sizeof(a3[0])
    };

    for (int t = 0; t < 3; ++t) {
        std::cout << "Исходный массив: ";
        print_array(arrays[t], sizes[t]);
        count_sort(arrays[t], sizes[t]);
        std::cout << "Отсортированный массив: ";
        print_array(arrays[t], sizes[t]);
        std::cout << std::endl;
    }
    return 0;
}
