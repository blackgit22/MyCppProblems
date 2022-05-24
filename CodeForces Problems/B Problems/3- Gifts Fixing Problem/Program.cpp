#include <iostream>
int find_min_index_array(int a[], int size);

int main()
{
    int t;
    std::cin >> t;
    for (int z = 0; z < t; z++)
    {
        int n;
        long long int counter = 0;

        std::cin >> n;

        int a[n], b[n];

        // getting data and storing it in arrays
        for (int i = 0; i < n; i++)
        {
            std::cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            std::cin >> b[i];
        }

        int min_a = find_min_index_array(a, n), min_b = find_min_index_array(b, n);

        for (int i = 0; i < n; i++)
        {
            if (a[i] > a[min_a] && b[i] > b[min_b])
            {
                while (a[i] != a[min_a] && b[i] != b[min_b])
                {
                    if (b[i] - b[min_b] < a[i] - a[min_a])
                    {
                        counter += b[i] - b[min_b];
                        a[i] = a[i] - (b[i] - b[min_b]);
                        b[i] = b[min_b];
                    }
                    else
                    {
                        counter += a[i] - a[min_a];
                        b[i] = b[i] - (a[i] - a[min_a]);
                        a[i] = a[min_a];
                    }
                }
            }

            if (a[i] > a[min_a])
            {
                while (a[i] > a[min_a])
                {
                    counter += a[i] - a[min_a];
                    a[i] = a[min_a];
                }
            }

            if (b[i] > b[min_b])
            {
                while (b[i] > b[min_b])
                {
                    counter += b[i] - b[min_b];
                    b[i] = b[min_b];
                }
            }
        }
        std::cout << counter << "\n";
    }
}
int find_min_index_array(int a[], int size)
{
    int min = a[0], ith = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            ith = i;
        }
    }
    return ith;
}

// https://codeforces.com/problemset/problem/1399/B