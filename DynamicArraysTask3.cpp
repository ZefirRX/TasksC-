#include <iostream>

int** create_two_dim_array(int rows, int colous); // Yes

void fill_two_dim_array(int rows, int colous, int** arr); //Yes

void print_two_dim_array(int rows, int colous, int** arr); // Yes

void delete_two_dim_array(int rows, int colous, int** arr);// Yes

int main() {
    setlocale(LC_ALL, "rus");
    int rows, colous;
    std::cout << "Введите количество строк : ";
    std::cin >> rows;
    std::cout << "Введите количество столбцов: ";
    std::cin >> colous;
    int** array = create_two_dim_array(rows, colous);
    fill_two_dim_array(rows, colous, array);
    print_two_dim_array(rows, colous, array);
}

int** create_two_dim_array(int rows, int colous) {
    int** array = new int* [rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new int[colous];
    }
    return array;
}

void fill_two_dim_array(int rows, int colous, int** arr) {
    std::cout << "Таблица умножения:" << std::endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < colous; j++) {
                if (i == 0) {
                    arr[i][j] = j + 1;
                }
                else if (j == 0) {
                    arr[i][j] = i + 1;
                }
                else { 
                    arr[i][j] = (j+1) * (i+1); 
                }
            }
        }
}

void print_two_dim_array(int rows, int colous, int** arr) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colous; j++) {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

void delete_two_dim_array(int rows, int colous, int** arr) {
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}