#include <iostream>

main()
{
    int walruses, chips, ith_walruses = 1;

    std::cin >> walruses >> chips;

    while (chips >= ith_walruses)
    {
        chips -= ith_walruses;
        ith_walruses++;
        if (ith_walruses == (walruses + 1))
        {
            ith_walruses = 1;
        }
    }
    std::cout << chips;
}
// https://codeforces.com/problemset/problem/92/A