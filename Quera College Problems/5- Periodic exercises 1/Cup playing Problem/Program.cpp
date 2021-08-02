#include <iostream>
using namespace std;

int main() {
    int n;
    char x, y, f;
    cin >> n >> x;
    f = x;
    for (int i = 0;i < n;i++) {
        cin >> y >> x;
        if (f == x) {
            f = y;
        }
        else if (f == y) {
            f = x;
        }
    }
    cout << f;
}
//https://quera.ir/college/2572/chapter/31764/lesson/104167/#page=1