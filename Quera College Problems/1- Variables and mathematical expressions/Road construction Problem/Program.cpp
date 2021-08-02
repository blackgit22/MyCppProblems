#include <iostream>
using namespace std;
int main()
{
    int n, y, z;
    cin >> n;
    if (n % 2 != 0) {
        n = n + 1;
        y = n / 2;
        z = (y + 1) * (y);
    }
    else {
        y = n / 2;
        z = (y + 1) * (y + 1);
    }
    cout << z;
}
//https://quera.ir/college/2572/chapter/7083/lesson/24115/#page=1,filter=ALL