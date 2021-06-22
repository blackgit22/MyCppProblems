#include<iostream>
#include<string>
using namespace std;
int main() {
    string t, discount_code;
    int  k = 0, counter = 0, f = 0, n = 0;


    cin >> k >> t;
    char original[t.size()], code[100];

    //determining the original code's sub alphabet with a for loop
    for (int i = 0;i < t.size();i++) {
        for (int j = 0;j < t.size() - (t.size() - i);j++) {
            if (t[j] == t[i]) {
                counter++;
            }
        }
        if (counter == 0) {
            original[f] = t[i];
            f++;
        }
        counter = 0;
    }

    //a for loop for every code, and determining sub alphabet of every code entered
    for (int i = 0;i < k;i++) {
        cin >> discount_code;
        for (int i = 0;i < discount_code.size();i++) {
            for (int j = 0;j < discount_code.size() - (discount_code.size() - i);j++) {
                if (discount_code[j] == discount_code[i]) {
                    counter++;
                }
            }
            if (counter == 0) {
                code[n] = discount_code[i];
                n++;
            }
            counter = 0;

        }
        //then checking the original sub alphabet with the entered code sub alphabet
        if (f == n) {
            for (int l = 0;l < n;l++) {
                for (int j = 0;j < n;j++) {
                    if (original[l] == discount_code[j]) {
                        counter++;
                    }
                }
            }
            if (counter == n) {
                cout << "Yes" << "\n";
                counter = 0;
                n = 0;
            }
            else {
                cout << "No" << "\n";
                counter = 0;
                n = 0;
            }

        }
        else {
            cout << "No" << "\n";
            counter = 0;
            n = 0;
        }

    }
    return 0;
}
//https://quera.ir/college/2572/chapter/7136/lesson/24280/#page=1