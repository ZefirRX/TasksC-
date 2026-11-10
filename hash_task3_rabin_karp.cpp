#include <iostream>
#include <string>

// Упрощённый алгоритм Рабина-Карпа: хэш — сумма кодов символов.
// Хэш окна пересчитывается скользящим способом за O(1).
int find_substring_light_rabin_karp(std::string source, std::string substring)
{
    int n = (int)source.length();
    int m = (int)substring.length();
    if (m == 0 || m > n)
    {
        return -1;
    }

    int subHash = 0;
    int windowHash = 0;
    for (int i = 0; i < m; ++i)
    {
        subHash += (unsigned char)substring[i];
        windowHash += (unsigned char)source[i];
    }

    for (int i = 0; i + m <= n; ++i)
    {
        if (windowHash == subHash)
        {
            // хэши совпали — проверяем посимвольно (возможна коллизия)
            bool equal = true;
            for (int j = 0; j < m; ++j)
            {
                if (source[i + j] != substring[j])
                {
                    equal = false;
                    break;
                }
            }
            if (equal)
            {
                return i;
            }
        }
        if (i + m < n)
        {
            windowHash += (unsigned char)source[i + m];
            windowHash -= (unsigned char)source[i];
        }
    }
    return -1;
}

int main()
{
    std::string source;
    std::cout << "Введите строку, в которой будет осуществляться поиск: ";
    std::getline(std::cin, source);

    std::string substring;
    do
    {
        std::cout << "Введите подстроку, которую нужно найти: ";
        std::getline(std::cin, substring);

        int index = find_substring_light_rabin_karp(source, substring);
        if (index == -1)
        {
            std::cout << "Подстрока " << substring << " не найдена" << std::endl;
        }
        else
        {
            std::cout << "Подстрока " << substring << " найдена по индексу "
                      << index << std::endl;
        }
    } while (substring != "exit");

    return 0;
}
