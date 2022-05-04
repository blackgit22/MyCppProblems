#include <iostream>
#include <string>

int main()
{
    std::string str1, str2;
    int counter = 0;

    std::cin >> str1 >> str2;

    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] <= 95)
        {
            str1[i] = (int)str1[i] + 32;
        }
        if (str2[i] <= 95)
        {
            str2[i] = (int)str2[i] + 32;
        }

        if ((int)str1[i] > (int)str2[i])
        {
            std::cout << 1;
            exit(0);
        }
        else if ((int)str1[i] < (int)str2[i])
        {
            std::cout << -1;
            exit(0);
        }
    }
    std::cout << 0;
}