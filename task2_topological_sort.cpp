#include <fstream>
#include <iostream>

void dfs(int v, int n, int** matrix, bool* visited, int* order, int& pos)
{
    visited[v] = true;
    for (int to = 0; to < n; ++to)
    {
        if (matrix[v][to] == 1 && !visited[to])
        {
            dfs(to, n, matrix, visited, order, pos);
        }
    }
    // вершина полностью обработана — кладём в стек (заполняем с конца)
    order[--pos] = v + 1;
}

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

    bool* visited = new bool[n]();
    int* order = new int[n];
    int pos = n;

    for (int v = 0; v < n; ++v)
    {
        if (!visited[v])
        {
            dfs(v, n, matrix, visited, order, pos);
        }
    }

    std::cout << "Топологический порядок вершин:";
    for (int i = 0; i < n; ++i)
    {
        std::cout << " " << order[i];
    }
    std::cout << std::endl;

    for (int i = 0; i < n; ++i)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    delete[] visited;
    delete[] order;

    return 0;
}
