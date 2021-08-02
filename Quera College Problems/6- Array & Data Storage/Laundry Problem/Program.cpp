#include<iostream>
#include<string>
using namespace std;

int main() {
    int n, m, i = 0, j;
    cin >> n >> m;
    int dry[n + 1];
    int* tech[m + 1];
    string order;
    for (int i = 0;i <= n;i++) {
        dry[i] = 0;
    }
    for (int i = 0;i <= m;i++) {
        tech[i] = 0;
    }


    while (order != "put an end to my misery") {
        cin >> i >> order;
        if (i != 0) {
            if (order == "track") {
                cin >> j;
                tech[i] = &dry[j];
            }
            if (order == "dry") {
                cin >> j;
                if (tech[i] == 0x0) {
                    cout << "no towel has been assigned to me." << "\n";
                }
                else {
                    if (*tech[i] - j < 0) {
                        *tech[i] = 0;
                    }
                    else {
                        *tech[i] = *tech[i] - j;
                    }
                }

            }
            if (order == "give") {
                if (tech[i] == 0) {
                    cout << "no towel has been assigned to me." << "\n";
                }
                else {
                    if (*tech[i] != 0) {
                        cout << "impossible" << "\n";
                    }
                    else {
                        cout << "ok" << "\n";
                        *tech[i] = 10;
                    }
                }

            }
            if (order == "output") {
                if (tech[i] != 0x0) {
                    cout << *tech[i] << "\n";
                }
                else {
                    cout << "no towel has been assigned to me." << "\n";
                }
            }

        }
        else {
            order = "put an end to my misery";
        }
        i = 0;
    }

    return 0;
}
//https://quera.ir/college/2572/chapter/7136/lesson/25090/#page=1