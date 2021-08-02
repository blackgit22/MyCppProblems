#include<iostream>
using namespace std;
int main() {
    int n, m, counter;
    char ch;

    cin >> n >> m;
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            cin >> ch;
            if (ch == '*') {
                counter++;
            }
            else {
            }
        }
    }
    cout << counter;

    return 0;
}
//https://quera.ir/college/2572/chapter/7136/lesson/24278/#page=1