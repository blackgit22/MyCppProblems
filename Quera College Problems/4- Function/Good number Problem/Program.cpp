#include <iostream>
#include<cmath>
using namespace std;
int num_div_counter(int x);

int main() {
    long long k, i = 1, n = 2;
    cin >> k;
    while (true) {
        if (num_div_counter(i) >= k) {
            cout << i;
            break;
        }
        i += n;
        n++;

    }
}

int num_div_counter(int x) {
    int counter = 0;
    for (int i = 1;i <= (int)sqrt(x);i++) {
        if (x % i == 0) {
            counter++;
        }
    }

    if ((int)sqrt(x) * (int)sqrt(x) == x) {
        return ((counter - 1) * 2) + 1;
    }

    else {
        return counter * 2;
    }
}
//https://quera.ir/college/2572/chapter/7149/lesson/104615/#page=1