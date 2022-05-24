#include <iostream>

main()
{
    int points[14] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10, 11}, wanted_point, counter = 0;

    std::cin >> wanted_point;

    wanted_point -= 10;

    for (int i = 0; i < 14; i++)
    {
        if (points[i] == wanted_point)
        {
            if (i == 11)
            {
                counter += 3;
            }
            else
            {
                counter += 4;
            }
        }
    }
    std::cout << counter;
}
// https://codeforces.com/problemset/problem/104/A