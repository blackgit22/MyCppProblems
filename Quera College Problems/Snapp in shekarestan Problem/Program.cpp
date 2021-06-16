#include<iostream>
using namespace std;

int main() {
    int a[100][100], n, m, yk, xk, sum = 0;
    cin >> n >> m;
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0;i < m;i++) {
        cin >> yk >> xk;
        yk--;
        xk--;
        sum = sum + a[yk][xk];
    }

    cout << sum;
    return 0;
}
//https://quera.ir/college/2572/chapter/7136/lesson/24274/