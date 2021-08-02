#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int n, l, di, ri, gi, count = 0, dl = 0, df = 0;
    cin >> n >> l;
    for (int i = 1; i <= n; i++)
    {
        cin >> di >> ri >> gi;
        dl = di - df;
        df = di;
        count = dl + count;
        //    cout << count << endl;
        if (count % (ri + gi) < (ri + gi + 1) / 2)
        {
            l = l + (ri - (count % ri));
            count = count + (ri - (count % ri));
            //        cout << l << endl;
        }
        //    cout << count << endl;
    }
    // cout << count;
    cout << l;
}
//https://quera.ir/college/2572/chapter/31764/lesson/104168/#page=1