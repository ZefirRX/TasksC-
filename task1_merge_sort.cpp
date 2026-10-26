#include <iostream>
#include <vector>

void merge_sort(int* arr, int size) {
    if (size < 2) return;

    int mid = size / 2;
    merge_sort(arr, mid);
    merge_sort(arr + mid, size - mid);

    std::vector<int> tmp(size);
    int i = 0, j = mid, k = 0;
    while (i < mid && j < size) {
        if (arr[i] <= arr[j]) tmp[k++] = arr[i++];
        else tmp[k++] = arr[j++];
    }
    while (i < mid) tmp[k++] = arr[i++];
    while (j < size) tmp[k++] = arr[j++];

    for (int n = 0; n < size; ++n) arr[n] = tmp[n];
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
        merge_sort(arrays[t], sizes[t]);
        std::cout << "Отсортированный массив: ";
        print_array(arrays[t], sizes[t]);
        std::cout << std::endl;
    }
    return 0;
}
