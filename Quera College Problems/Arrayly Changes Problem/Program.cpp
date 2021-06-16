#include<iostream>
using namespace std;

int main() {
    int a[110], q, x, i, counter = 0;
    char ch;
    cin >> q;
    for (int j = 0;j < q;j++) {
        cin >> ch;
        if (ch == '+') {
            cin >> i >> x;
            i--;
            counter++;
            for (int k = 100;k >= i;k--) {
                a[k + 1] = a[k];
            }
            a[i] = x;
        }
        else if (ch == '-') {
            cin >> i;
            i--;
            counter--;
            for (int k = 0;k < 100 - i;k++) {
                a[i] = a[i + 1];
                i++;
            }

        }
        if (counter != 0) {
            for (int c = 0;c < counter;c++) {
                cout << a[c] << " ";
            }
            cout << "\n";
        }
        else {
            cout << "EMPTY" << "\n";
        }
    }
    return 0;
}
//https://quera.ir/college/2572/chapter/7136/lesson/33956/#page=1