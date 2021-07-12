#include <iostream>
#include <math.h>
using namespace std;
bool prime_checker(int x);
void price_determiner(int* x, int* y);
int discount_determiner(int y);

int main() {
    int n, x, counter = 0;
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> x;
        price_determiner(&x, &counter);
    }


    cout << discount_determiner(counter);
}

//price determiner for every x that entered
void price_determiner(int* x, int* y) {
    if (prime_checker(*x) == true) {
        for (int j = *x - 1;j >= 2;j--) {
            if (prime_checker(j) == true) {
                (*y)++;
            }
        }
        return;
    }
    else {
        for (int j = *x - 1;j >= 2;j--) {
            if (*x % j == 0) {
                if (prime_checker(j) == true) {
                    (*y)++;
                }
            }
        }
        return;
    }
}

//calculate the discount price for the whole price
int discount_determiner(int y) {
    int k = y;
    if (prime_checker(k) == true) {
        for (int j = k - 1;j >= 2;j--) {
            if (prime_checker(j) == true) {
                y--;
            }
        }
        return y;
    }
    else {
        for (int j = k - 1;j >= 2;j--) {
            if (k % j == 0) {
                if (prime_checker(j) == true) {
                    y--;
                }
            }
        }
        return y;
    }
}

//just a simple prime checker :)
bool prime_checker(int x) {
    for (int i = 2;i <= (int)sqrt(x);i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;

}

//https://quera.ir/college/2572/chapter/7149/lesson/25092/#page=1