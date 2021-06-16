#include <iostream>
using namespace std;

int main() {
    int a[110], n, x, answer = 100, l;
    cin >> n;

    for (int i = 0;i < 110;i++) {
        a[i] = 0;
    }
    for (int i = 0;i < n;i++) {
        cin >> x;
        a[x]++;
    }
    for (int i = 1;i < 110;i++) {
        if (a[i] < answer && a[i] != 0) {
            answer = a[i];
            l = i;
        }
    }
    cout << l;


    return 0;
}
//https://quera.ir/college/2572/chapter/7136/lesson/24275/#page=1,filter=ALL