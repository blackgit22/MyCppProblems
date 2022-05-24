#include <iostream>
using namespace std;

int main()
{
    int n, m, counter = 0;

    cin >> n >> m;

    for (int i = 0; i <= 1000; i++)
    {
        if (i - (2 * n * i * i) + (i * i * i * i) - m + (n * n) == 0 && n - (i * i) >= 0)
        {
            counter++;
        }
    }
    cout << counter;
}

// https://codeforces.com/problemset/problem/214/A