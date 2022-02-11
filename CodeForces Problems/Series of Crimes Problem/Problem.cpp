#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, m, counter = 0, x, y, x_prime, y_doubleprime, y_prime;
    char ch;

    cin >> n >> m;

    int district[3][2];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> ch;
            if (ch == '*')
            {
                district[counter][0] = i;
                district[counter][1] = j;
                counter++;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {

            if (district[i][0] == district[j][0])
            {
                y_prime = district[i][1];
                y_doubleprime = district[j][1];
                x_prime = district[i][0];
                break;
            }
        }
    }

    for (int j = 0; j < 3; j++)
    {
        if (district[j][0] != x_prime)
        {
            x = district[j][0];
            if (max(y_prime, y_doubleprime) == district[j][1])
            {
                y = min(y_prime, y_doubleprime);
                break;
            }
            else
            {
                y = max(y_prime, y_doubleprime);
                break;
            }
        }
    }
    cout << x << " " << y;
}
// https://codeforces.com/problemset/problem/181/A