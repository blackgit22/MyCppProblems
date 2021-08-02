#include<iostream>
using namespace std;
int coprime_checker(int x, int y);
int lcm_f(int x, int y);
int gcd(int x, int y);
void swap(int x, int y);

int main() {
    int x, counter = 0, k = 0;
    cin >> x;
    int coprime[x - 1];
    for (int i = 1;i < x;i++) {
        if (coprime_checker(x, x - i) == 1) {
            k++;
            coprime[k - 1] = x - i;
        }
    }
    int lcm = coprime[0];
    for (int i = 0;i < k - 1;i++) {
        lcm = lcm_f(lcm, coprime[i + 1]);
    }
    cout << lcm;
}

void swap(int* x, int* y) {
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}

int gcd(int x, int y) {
    while (true) {
        if (y > x) {
            swap(&x, &y);
        }
        if (x % y != 0) {
            x = x % y;
        }
        else {
            return y;
        }
    }
}

int coprime_checker(int x, int y) {
    if (gcd(x, y) == 1) {
        return 1;
    }
    return 0;
}

//google formula,LMAO:)
int lcm_f(int x, int y) {
    return ((x * y) / (gcd(x, y)));
}

//lcm with complete algorithm
/*
int lcm_f(int x, int y) {
    int i = 1, j = 1;
    while (true) {
        if (y > x) {
            swap(&x, &y);
        }
        if (y == 1) {
            return x;
        }
        else if (x * i == y * j) {
            return x * i;
        }
        else if (x * i > y * j) {
            j++;
        }
        else if (x * i < y * j) {
            i++;
        }
    }
}
*/

//https://quera.ir/college/2572/chapter/7149/lesson/24348/#page=1