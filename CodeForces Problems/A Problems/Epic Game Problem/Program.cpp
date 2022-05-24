#include <iostream>
int gcd(int a, int b);

int main()
{
    int a, b, n, counter = 0;

    std::cin >> a >> b >> n;

    while (true)
    {
        n = n - gcd(a, n);
        counter++;
        if (n <= 0)
        {
            break;
        }
        n = n - gcd(b, n);
        counter++;
        if (n <= 0)
        {
            break;
        }
    }
    if (counter % 2 == 1)
    {
        std::cout << 0;
    }
    else
    {
        std::cout << 1;
    }
}

int gcd(int a, int b)
{
    int r = a % b;

    while (r != 0)
    {
        a = b;
        b = r;
        if (a < b)
        {
            int c;
            c = a;
            a = b;
            b = c;
        }
        r = a % b;
    }
    return b;
}

// https://codeforces.com/problemset/problem/119/A