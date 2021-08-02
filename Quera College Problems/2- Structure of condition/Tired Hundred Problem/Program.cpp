#include <iostream>
using namespace std;
int main() {
    int num1, num2, hun1, hun2, preten1, preten2, ten1, ten2, sing1, sing2;
    cin >> num1 >> num2;
    hun1 = num1 / 100;
    hun2 = num2 / 100;
    preten1 = num1 % 100;
    preten2 = num2 % 100;
    ten1 = preten1 / 10;
    ten2 = preten2 / 10;
    sing1 = num1 % 10;
    sing2 = num2 % 10;
    if (num1 == num2) {
        cout << num1 << " = " << num2;
        exit(0);
    }
    if (sing1 < sing2) {
        cout << num1 << " < " << num2;
        exit(0);
    }
    if (sing2 < sing1) {
        cout << num2 << " < " << num1;
        exit(0);
    }
    if (ten1 < ten2) {
        cout << num1 << " < " << num2;
        exit(0);
    }
    if (ten2 < ten1) {
        cout << num2 << " < " << num1;
        exit(0);
    }
    if (hun1 > hun2) {
        cout << num1 << " < " << num2;
        exit(0);
    }
    else if (hun2 > hun1) {
        cout << num2 << " < " << num1;
        exit(0);
    }
}
//https://quera.ir/college/2572/chapter/7088/lesson/33722/#page=1