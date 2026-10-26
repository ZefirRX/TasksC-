#include <iostream>
#include <string>

void print_dynamic_array(int* arr, int logical_size, int actual_size) {
    for (int i = 0; i < actual_size; ++i) {
        if (i < logical_size) std::cout << arr[i];
        else std::cout << '_';
        if (i + 1 < actual_size) std::cout << ' ';
    }
    std::cout << std::endl;
}

// Удаляет первый элемент. Размеры передаются по ссылке,
// возвращается указатель на актуальный массив (старый или новый).
// Предполагается, что logical_size > 0.
int* remove_dynamic_array_head(int* arr, int& logical_size, int& actual_size) {
    if (logical_size - 1 > actual_size / 3) {
        for (int i = 1; i < logical_size; ++i) {
            arr[i - 1] = arr[i];
        }
        --logical_size;
        return arr;
    }

    int new_actual_size = actual_size / 3;
    if (new_actual_size < 1) new_actual_size = 1;

    int* new_arr = new int[new_actual_size];
    for (int i = 1; i < logical_size; ++i) {
        new_arr[i - 1] = arr[i];
    }

    delete[] arr;
    --logical_size;
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
        std::string answer;
        std::cout << "Удалить первый элемент? ";
        std::cin >> answer;

        if (answer == "да") {
            if (logical_size == 0) {
                std::cout << "Невозможно удалить первый элемент, так как массив пустой. До свидания!" << std::endl;
                break;
            }
            arr = remove_dynamic_array_head(arr, logical_size, actual_size);
            std::cout << "Динамический массив: ";
            print_dynamic_array(arr, logical_size, actual_size);
        } else if (answer == "нет") {
            std::cout << "Спасибо! Ваш динамический массив: ";
            print_dynamic_array(arr, logical_size, actual_size);
            break;
        }
    }

    delete[] arr;
    return 0;
}
