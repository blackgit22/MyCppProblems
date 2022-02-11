#include <iostream>
using namespace std;

int main()
{
    int n, count = 0, x, x3;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> x;
            if (i == j || i + j == n + 1 || i == ((n + 1) / 2) || j == ((n + 1) / 2))
            {
                count += x;
            }
        }
    }
    cout << count;
}
// https://codeforces.com/problemset/problem/177/A1