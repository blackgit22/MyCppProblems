#include <iostream>
#include <math.h>
bool prime_checker(int x);

main()
{
    int n, m;
    std::cin >> n >> m;
    n++;
    while (prime_checker(n) == false)
    {
        n++;
    }
    if (n == m)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
}

bool prime_checker(int x)
{
    int counter = 0;
    for (int i = 2; i <= (int)sqrt(x); i++)
    {
        if (x % i == 0)
        {
            counter++;
        }
    }
    if (counter == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
// https://codeforces.com/problemset/problem/80/A