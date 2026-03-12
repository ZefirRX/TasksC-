#include <iostream>
using namespace std;

void print(int* arr, int size);
void reverse(int* arr, int size);

int main() {
    setlocale(LC_ALL, "rus");
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    cout << "До функции reverse: ";
    print(arr, size);
    reverse(arr, size);
    cout << "После функции reverse: ";
    print(arr, size);
    return 0;
}

void reverse(int* arr, int size) {
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

void print(int* arr, int size) {
    for (int i = 0; i < size; i++) { cout << arr[i] << " "; }
    cout << endl;
}