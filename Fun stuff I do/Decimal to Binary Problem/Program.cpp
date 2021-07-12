#include <iostream>
#include <math.h>
using namespace std;

int main() {
    long long x, counter = 0;
    cin >> x;
    long long f = x;
    while (x > 0) {
        counter++;
        x = x / 2;
    }
    long long y = sqrt(x);
    long long num[counter];
    long long i = 0;
    while (f > 0) {
        num[i] = f % 2;
        f = f / 2;
        i++;
    }
    for (long long i = counter - 1;i > -1;i--) {
        cout << num[i];
    }
}