#include <iostream>

int main()
{
    int n, counter = 1;

    std::cin >> n;

    int p[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> p[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (p[j] == counter)
            {
                std::cout << j + 1 << " ";
            }
        }
        counter++;
    }
}