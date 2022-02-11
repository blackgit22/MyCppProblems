#include <iostream>
using namespace std;

int main()
{
    int n, min, max, count = 0;

    cin >> n;

    int scores[n];

    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
        if (i == 0)
        {
            min = scores[i];
            max = scores[i];
        }
        if (i != 0)
        {
            if (min > scores[i])
            {
                count++;
                min = scores[i];
            }
            else if (max < scores[i])
            {
                count++;
                max = scores[i];
            }
        }
    }
    cout << count;
}
// https://codeforces.com/problemset/problem/155/A