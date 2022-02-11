#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int n, x, sum1 = 0, sum2 = 0;
    string num, half1, half2, s, h;

    cin >> n >> num;

    for (int i = n - 1; i >= n / 2; i--)
    {
        half2 += num[i];
        half1 += num[n - 1 - i];
    }

    for (int i = 0; i < n / 2; i++)
    {
        s = half1[i];
        stringstream num1_string(s);
        num1_string >> x;
        if (x != 4 && x != 7)
        {
            cout << "NO";
            exit(0);
        }
        sum1 += x;

        s = half2[i];
        stringstream num2_string(s);
        num2_string >> x;
        if (x != 4 && x != 7)
        {
            cout << "NO";
            exit(0);
        }
        sum2 += x;
    }
    if (sum1 == sum2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}