#include <iostream>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, ns, drink, needed_l, needed_s, limes, count = 0;

    cin >> n >> k >> l >> c >> d >> p >> nl >> ns;

    drink = k * l;
    needed_l = n * nl;
    needed_s = n * ns;
    limes = c * d;

    while (true)
    {
        if (needed_l <= drink && needed_s <= p && n <= limes)
        {
            count++;
            drink -= needed_l;
            p -= needed_s;
            limes -= n;
        }
        else
        {
            break;
        }
    }
    cout << count;

    return 0;
}
// https://codeforces.com/problemset/problem/151/A