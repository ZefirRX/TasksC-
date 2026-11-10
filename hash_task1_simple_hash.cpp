#include <iostream>
#include <string>

int simple_string_hash(std::string s)
{
    int sum = 0;
    for (int i = 0; i < (int)s.length(); ++i)
    {
        sum += (unsigned char)s[i];
    }
    return sum;
}

int main()
{
    std::string input;
    do
    {
        std::cout << "Введите строку: ";
        std::getline(std::cin, input);
        std::cout << "Наивный хэш строки " << input << " = "
                  << simple_string_hash(input) << std::endl;
    } while (input != "exit");

    return 0;
}
