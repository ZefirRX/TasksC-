#include <fstream>
#include <iostream>

int main()
{
    std::ifstream fin("input.txt");
    if (!fin.is_open())
    {
        std::cout << "Не удалось открыть файл input.txt" << std::endl;
        return 1;
    }

    int n = 0;
    fin >> n;

    int** matrix = new int*[n];
    for (int i = 0; i < n; ++i)
    {
        matrix[i] = new int[n];
        for (int j = 0; j < n; ++j)
        {
            fin >> matrix[i][j];
        }
    }
    fin.close();

    std::cout << "Текстовый вид орграфа:" << std::endl;
    for (int i = 0; i < n; ++i)
    {
        std::cout << i + 1 << ":";
        bool hasEdges = false;
        for (int j = 0; j < n; ++j)
        {
            if (matrix[i][j] == 1)
            {
                std::cout << " " << j + 1;
                hasEdges = true;
            }
        }
        if (!hasEdges)
        {
            std::cout << " нет";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; ++i)
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
