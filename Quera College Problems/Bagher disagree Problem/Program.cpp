#include <iostream>
#include <sstream>
using namespace std;

int main() {
    long long num, counter = 0, checker = 0, wh;
    char n, f;
    string str;
    stringstream ss;
    cin >> num;
    ss << num;
    ss >> str;
    for (int i = str.size() - 1;i > 0;i--) {
        counter++;
        if ((int)str[i - 1] < ((int)str[i])) {
            checker++;
            n = str[i - 1];
            str[i - 1] = str[i];
            str[i] = n;
            wh = i - 1;
            break;
        }
    }
    for (int i = wh + 2;i < str.size();i++) {
        counter++;
        if ((int)str[i] < ((int)str[wh]) && (int)str[i]>(int)n) {
            checker++;
            f = str[i];
            str[i] = str[wh];
            str[wh] = f;
        }
    }
    if (checker != 0) {
        for (int j = 0;j < str.size() - wh;j++)
            for (int i = str.size() - 1;i > wh + 1;i--) {
                if ((int)str[i] < ((int)str[i - 1])) {
                    n = str[i];
                    str[i] = str[i - 1];
                    str[i - 1] = n;
                }
            }
        cout << str;
    }
    else {
        cout << 0;
    }
}
//https://quera.ir/college/2572/chapter/7140/lesson/24317/#page=1