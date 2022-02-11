#include <iostream>

int main()
{
    int n, maxim = 0, minim = 101, maxim_index, minim_index, efficiency = 0;

    std::cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
        if (a[i] > maxim)
        {
            maxim = a[i];
            maxim_index = i;
        }
    }

    while (maxim_index != 0)
    {
        int c;
        c = a[maxim_index - 1];
        a[maxim_index - 1] = a[maxim_index];
        a[maxim_index] = c;
        maxim_index -= 1;
        efficiency++;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] <= minim)
        {
            minim = a[i];
            minim_index = i;
        }
    }

    while (minim_index != n - 1)
    {
        int c;
        c = a[minim_index + 1];
        a[minim_index + 1] = a[minim_index];
        a[minim_index] = c;
        minim_index += 1;
        efficiency++;
    }
    std::cout << efficiency;
}