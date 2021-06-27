#include<iostream>
using namespace std;
int main() {
    long long n, x, y, counter = 1;
    cin >> n >> x >> y;
    if (n % x == 0) {
        cout << n / x << " " << 0;
    }
    else if (n % y == 0) {
        cout << 0 << " " << n / y;
    }
    else {
        while ((n % (x * counter)) % y != 0 && n >= (x * counter) && ((x * counter) + y * ((n - (x * counter)) / y) != n)) {
            counter++;
        }
        if ((x * counter) + y * ((n - (x * counter)) / y) == n) {
            cout << counter << " " << ((n - (x * counter)) / y);
        }
        else {
            counter = 1;
            while (((n % (y * counter)) % x != 0 && n >= (y * counter)) && ((y * counter) + x * ((n - (y * counter)) / x) != n)) {
                counter++;
            }
            if ((y * counter) + x * ((n - (y * counter)) / x) == n) {
                cout << ((n - (y * counter)) / x) << " " << counter;
            }
            else {
                cout << -1;
            }
        }
    }
    return 0;
}
//https://quera.ir/college/2572/chapter/7140/lesson/24311/#page=1