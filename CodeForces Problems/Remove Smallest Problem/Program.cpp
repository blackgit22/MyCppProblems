#include <iostream>
using namespace std;
void bubble_sort(int a[], int n);

int main()
{
    int t;

    cin >> t;

    for (int k = 0; k < t; k++)
    {
        int n, counter = 0;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bubble_sort(a, n);

        for (int i = 0; i < n - 1; i++)
        {
            if (abs(a[i] - a[i + 1]) <= 1)
            {
                counter++;
            }
        }
        if (counter == n - 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

void bubble_sort(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                count++;
                swap(a[j], a[j + 1]);
            }
        }
        if (count == 0)
        {
            break;
        }
        count = 0;
    }
}
// https://codeforces.com/problemset/problem/1399/A