#include<iostream>
#include<string>
using namespace std;

int main() {
    int n, len, index, num, counter = 0, counter2 = 0;
    string str, str_array[120], p;
    for (int i = 0;i < 120;i++) {
        str_array[i] = "";
    }
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> num;
        if (num == 1) {
            cin >> index >> len >> str;
            str_array[index] = str_array[index] + str;
        }
        else {
            cin >> index >> len >> str;
            p = str_array[index];
            for (int j = 0;j < p.size();j++) {
                for (int k = 0;k < len;k++) {
                    if (str_array[index][k + j] == str[k]) {
                        counter++;
                    }
                }
                if (counter == len) {
                    counter2++;
                }
                counter = 0;
            }
            cout << counter2 << "\n";
            counter2 = 0;
        }
    }
}
