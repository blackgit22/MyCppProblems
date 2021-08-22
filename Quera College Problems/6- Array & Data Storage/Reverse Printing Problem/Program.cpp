#include <iostream>
using namespace std;
int main()
{
    int a[1000], n, num = 0, i = 0;
    do {
        cin >> num;
        a[i] = num;
        i++;
    } while (num != 0);

    for (int j = 1;j < i;j++) {
        cout << a[i - j - 1] << "\n";

    }
    return 0;

}
//https://quera.ir/college/2572/chapter/7136/lesson/33735/#page=1