#include <iostream>
using namespace std;

int main() {
    int n, k, hassani = 1, counter = 0;
    cin >> n >> k;

    do {
        hassani += k;
        if (hassani >= n) {
            hassani = hassani - n;
        }
        counter++;
    } while (hassani != 1);

    cout << counter;
}