#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y, n, mid, q, number, counter;
    char ch;
    cin >> n >> q;
    int array[q + 1];
    for (int i = 1;i <= q;i++) {
        cin >> array[i];
    }
    for (int i = 0;i < n;i++) {
        cin >> ch >> number;
        x = q + 1;
        y = 0;
        while (x - y > 1) {
            mid = (x + y) / 2;
            if (array[mid] > number) {
                x = mid;
            }
            else if (array[mid] <= number) {
                y = mid;
            }
        }
        if (array[y] == number) {
            cout << 1 << "\n";
        }
        else {
            cout << 0 << "\n";
        }
    }
}
//https://quera.ir/college/2572/chapter/7140/lesson/104232/#page=1