#include<iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], c[10][10], n, m;
    cin >> n >> m;
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            cin >> b[i][j];
        }
    }
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }


    return 0;
}
//https://quera.ir/college/2572/chapter/7136/lesson/33729/