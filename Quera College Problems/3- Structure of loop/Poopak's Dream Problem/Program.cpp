#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a, b, x, count = 0;
    cin >> a >> b >> x;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            for (int j = 1; j <= b; j++)
            {
                if (b % j == 0)
                {
                    if (j + i <= x)
                    {
                        count++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
    }
    cout << count;
    return 0;
}

//https://quera.ir/college/2572/chapter/7095/lesson/24145/#page=1