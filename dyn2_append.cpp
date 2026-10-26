#include <iostream>

void print_dynamic_array(int* arr, int logical_size, int actual_size) {
    for (int i = 0; i < actual_size; ++i) {
        if (i < logical_size) std::cout << arr[i];
        else std::cout << '_';
        if (i + 1 < actual_size) std::cout << ' ';
    }
    std::cout << std::endl;
}

// Добавляет элемент в конец. Размеры передаются по ссылке,
// возвращается указатель на актуальный массив (старый или новый).
int* append_to_dynamic_array(int* arr, int& logical_size, int& actual_size, int value) {
    if (logical_size < actual_size) {
        arr[logical_size] = value;
        ++logical_size;
        return arr;
    }

    int new_actual_size = actual_size * 2;
    if (new_actual_size == 0) new_actual_size = 1;

    int* new_arr = new int[new_actual_size];
    for (int i = 0; i < logical_size; ++i) {
        new_arr[i] = arr[i];
    }
    new_arr[logical_size] = value;

    delete[] arr;
    ++logical_size;
    actual_size = new_actual_size;
    return new_arr;
}

int main() {
    int actual_size = 0, logical_size = 0;

    std::cout << "Введите фактический размер массива: ";
    std::cin >> actual_size;
    std::cout << "Введите логический размер массива: ";
    std::cin >> logical_size;

    if (logical_size > actual_size) {
        std::cout << "Ошибка! Логический размер массива не может превышать фактический!" << std::endl;
        return 1;
    }

    int* arr = new int[actual_size];
    for (int i = 0; i < logical_size; ++i) {
        std::cout << "Введите arr[" << i << "]: ";
        std::cin >> arr[i];
    }

    std::cout << "Динамический массив: ";
    print_dynamic_array(arr, logical_size, actual_size);

    while (true) {
        int value = 0;
        std::cout << "Введите элемент для добавления: ";
        std::cin >> value;
        if (value == 0) break;

        arr = append_to_dynamic_array(arr, logical_size, actual_size, value);
        std::cout << "Динамический массив: ";
        print_dynamic_array(arr, logical_size, actual_size);
    }

    std::cout << "Спасибо! Ваш массив: ";
    print_dynamic_array(arr, logical_size, actual_size);

    delete[] arr;
    return 0;
}
