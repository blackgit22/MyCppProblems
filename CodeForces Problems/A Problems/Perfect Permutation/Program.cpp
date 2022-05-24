#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 != 0)
    {
        cout << -1;
        exit(0);
    }
    for (int i = n; i > 0; i--)
    {
        cout << i << " ";
    }
}

// https://codeforces.com/problemset/problem/233/A