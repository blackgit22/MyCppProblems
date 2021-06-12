#include <iostream>
using namespace std;

int main() {
    int a[100000], b[100000], n, h = 0;
    char x;
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> x;
        a[i] = x;
    }
    for (int i = 0;i < n;i++) {
        cin >> x;
        b[i] = x;
    }
    for (int i = 0;i < n;i++) {
        if (a[i] != b[i]) {
            h++;
        }
    }

    cout << h;

}
//https://quera.ir/college/2572/chapter/7136/lesson/24272/#page=1