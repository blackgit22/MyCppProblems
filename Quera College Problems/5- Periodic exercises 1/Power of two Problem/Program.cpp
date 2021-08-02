#include<iostream>
#include<cmath>
using namespace std;


int main() {
    int x, counter = 0;
    cin >> x;
    while (true) {
        if (x == 1) {
            break;
        }
        counter++;
        x /= 2;
    }
    for (int i = 0;i <= counter;i++) {
        x *= 2;
    }
    cout << x;

}