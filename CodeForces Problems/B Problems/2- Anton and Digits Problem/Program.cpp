#include <iostream>

int main()
{
    int k2, k3, k5, k6, counter_256 = 0, counter_32 = 0;

    std::cin >> k2 >> k3 >> k5 >> k6;

    while (k2 > 0 && k5 > 0 && k6 > 0)
    {
        counter_256++;
        k2--;
        k5--;
        k6--;
    }

    while (k2 > 0 && k3 > 0)
    {
        counter_32++;
        k3--;
        k2--;
    }

    std::cout << (counter_256 * 256) + (counter_32 * 32);
}
// https://codeforces.com/problemset/problem/734/B