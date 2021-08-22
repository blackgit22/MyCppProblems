#include <iostream>
using namespace std;
bool search_confirm(int a[], int x);

int main()
{
    int n, fib[12] = {1, 1};
    cin >> n;

    for (int i = 2; i < 12; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (int i = 1; i <= n; i++)
    {
        if (search_confirm(fib, i) == true)
        {
            cout << "+";
        }
        else
        {
            cout << "-";
        }
    }
}

bool search_confirm(int a[], int x)
{
    int l = 0, v = 12, mid;

    while (l < v)
    {
        mid = (l + v) / 2;
        if (a[mid] == x)
        {
            return true;
        }
        else if (a[mid] > x)
        {
            v = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    return false;
}
//https://quera.ir/college/2572/chapter/7178/lesson/24470/?comments_page=1&comments_filter=ALL&submissions_page=1