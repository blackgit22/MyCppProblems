#include<iostream>
#include<cmath>
using namespace std;
int prime_checker(int x);

int main() {
    int a, b;
    cin >> a >> b;
    if (a > b) {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }

    if (a == 1 || b == 1) {
        for (int i = a + 1; i <= b;i++) {
            if (prime_checker(i) != 0) {
                cout << prime_checker(i) << "\n";
            }
        }
    }
    else {
        for (int i = a; i <= b;i++) {
            if (prime_checker(i) != 0) {
                cout << prime_checker(i) << "\n";
            }
        }
    }
}


int prime_checker(int x) {
    int counter = 0;
    for (int i = 2;i <= (int)sqrt(x);i++) {
        if (x % i == 0) {
            counter++;
        }
    }
    if (counter == 0) {
        return x;
    }
    else {
        return 0;
    }
}