#include <iostream>
using namespace std;

int main() {
    int a[12];
    for (int i = 0;i < 12;i++) {
        cin >> a[i];
    }
    for (int i = 1;i < 12;i++) {
        a[0] += a[i];
    }
    cout << a[0];


}
//https://quera.ir/college/2572/chapter/7136/lesson/104467/