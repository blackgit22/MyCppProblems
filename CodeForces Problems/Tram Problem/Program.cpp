#include <iostream>

int main()
{
    int n, a, b, maxi, t = 0;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> a >> b;
        t -= a - b;
        if (t >= maxi)
        {
            maxi = t;
        }
    }
    std::cout << maxi;
}