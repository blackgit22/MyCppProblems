#include<iostream>
#include<cmath>
using namespace std;
long long avr(long long x, long long y, long long z);

int main() {
    long long a, b, c, x, counter = 0;
    cin >> a >> b >> c;
    if (a == avr(a, b, c)) {
        counter++;
    }
    if (b == avr(a, b, c)) {
        counter++;
    }
    if (c == avr(a, b, c)) {
        counter++;
    }
    if (counter == 2 || counter == 0) {
        cout << 2;
    }
    if (counter == 1) {
        cout << 1;
    }
    if (counter == 3) {
        cout << 0;
    }
}

long long avr(long long x, long long y, long long z) {
    return (x + y + z) / 3;
}
//https://quera.ir/college/2572/chapter/31764/lesson/104171/