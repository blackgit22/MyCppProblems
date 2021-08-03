#include <iostream>
using namespace std;
void insertion_sort(int a[], int x);

int main()
{
    int n, k, ans = 1000000001, counter2 = 0;
    cin >> n >> k;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (k == 1)
    {
        cout << 0;
        exit(0);
    }
    insertion_sort(a, n);

    for (int i = 0; i < n; i++)
    {
        int counter = 1, p = i + 1;
        while (p < n)
        {
            if (a[p] != a[p - 1])
            {
                counter++;
                if (counter == k)
                {
                    ans = min(ans, a[p] - a[i]);
                }
            }
            p++;
        }
    }
    if (ans == 1000000001)
    {
        cout << -1;
    }
    else
    {
        cout << ans;
    }

    return 0;
}

void insertion_sort(int a[], int x)
{
    for (int i = 0; i < x - 1; i++)
    {
        int nam = i + 1;
        for (int j = i; j >= 0; j--)
        {
            if (a[nam] < a[j])
            {
                swap(a[nam], a[j]);
                nam = j;
            }
        }
    }
}
//naaaam baby!!