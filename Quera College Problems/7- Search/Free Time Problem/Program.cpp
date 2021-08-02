#include<iostream>
#include<string>
using namespace std;
int main() {
    int n, m, counter = 0, counter2 = 0, knower = 0;
    string word[60], name, name2;
    cin >> n >> m;
    for (int i = 0; i < n;i++) {
        cin >> word[i];
    }
    cin >> name;
    for (int i = 0;i < n;i++) {
        name2 = word[i];
        for (int k = 0;k < m;k++) {
            for (int j = 0;j < name.size();j++) {
                if (name2[j + k] == name[j]) {
                    knower++;
                }
            }
            if (knower == name.size()) {
                counter++;
            }
            knower = 0;
        }

    }
    for (int k = 0;k < m;k++) {
        for (int f = 0;f < m;f++) {
            for (int l = 0;l < name.size();l++) {
                if (word[l + f][k] == name[l]) {
                    knower++;
                }
            }
            if (knower == name.size()) {
                counter2++;
            }
            knower = 0;
        }

    }
    cout << counter + counter2;


    return 0;
}