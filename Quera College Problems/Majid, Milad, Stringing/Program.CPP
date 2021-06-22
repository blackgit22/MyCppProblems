#include<iostream>
#include<math.h>
using namespace std;
int main() {
    long long k = 1, counter = 0, counter2 = 0;
    int l, r;
    cin >> l >> r;
    int string[r];
    l--;
    r--;
    string[0] = 1;
    while (k <= r) {
        for (int j = 0;j < k;j++) {
            if (string[j] == 1) {
                string[k + j] = 0;
            }
            else {

                string[k + j] = 1;

            }
            counter2++;
            if (counter2 >= r) {
                break;
            }
        }
        if (counter2 >= r) {
            break;
        }
        else {
            counter++;
            k = pow(2, counter);
        }
    }
    for (int i = l;i <= r;i++) {
        cout << string[i];
    }
    return 0;
}
//https://quera.ir/college/2572/chapter/7136/lesson/24281/#page=1