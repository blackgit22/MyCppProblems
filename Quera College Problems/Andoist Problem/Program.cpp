#include<iostream>
using namespace std;

int main() {
    int a[200], x, q;
    char ch;
    cin >> q;
    for (int i = 0;i <= 200;i++) {
        a[i] = 0;
    }

    for (int i = 0;i < q;i++) {
        cin >> ch >> x;
        if (ch == '+') {
            a[x]++;
        }
        else {
            cout << a[x] << "\n";
        }
    }

    return 0;
}
//https://quera.ir/college/2572/chapter/7136/lesson/33961/