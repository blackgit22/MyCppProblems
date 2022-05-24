#include <iostream>

int main()
{
    int num;
    double per_drink_percentage, total_percentage = 0;

    std::cin >> num;

    for (int i = 0; i < num; i++)
    {
        std::cin >> per_drink_percentage;

        total_percentage += per_drink_percentage / 100;
    }

    std::cout << ((total_percentage / num) * 100);
}
// https://codeforces.com/problemset/problem/200/B