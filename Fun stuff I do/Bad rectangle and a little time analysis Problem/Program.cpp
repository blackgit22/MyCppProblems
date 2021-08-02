#include<iostream>
#include<math.h>
using namespace std;
int main() {
    long long n, a, b, counter = 0, zero = 0;
    cin >> n;
    for (a = 1;a <= n / 3;a++) {
        counter = counter + (((n - 3 * a) / 2) - max(zero, (n / 2) - (2 * a) + 1)) + 1;
    }
    cout << counter;


    return 0;
}
//https://quera.ir/college/2572/chapter/7140/lesson/24299/#page=1