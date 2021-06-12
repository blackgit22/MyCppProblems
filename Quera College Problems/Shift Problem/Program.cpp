#include <iostream>
using namespace std;
int main()
{
    int a[100], x, n, num, f = 0, p = 1;
    cin >> n >> x;
    for (int i = 0;i < n;i++) {
        cin >> num;
        a[i] = num;
    }
    for (int j = x;j > 0;j--) {
        cout << a[n - j] << " ";

    }
    for (int i = 0;i < n - x;i++) {
        cout << a[i] << " ";
    }
    return 0;

}
//https://quera.ir/college/2572/chapter/7136/lesson/33960/#page=1