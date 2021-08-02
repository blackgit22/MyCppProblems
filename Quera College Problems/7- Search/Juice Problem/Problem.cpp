#include<iostream>
#include<string>
using namespace std;
int main() {
    int counter = 0, counter1 = 0, k = -1;
    char ch;
    string s, p, d;
    cin >> s >> p;
    for (int i = 0;i < s.size();i++) {
        ch = s[0];
        for (int j = 1;j <= s.size();j++) {
            s[j - 1] = s[j];
        }
        s[s.size() - 1] = ch;
        for (int j = 0;j < p.size();j++) {
            if ((k + 1) >= s.size()) {
                k = 0;
            }
            else {
                k++;
            }
            if (p[j] == s[k]) {
                counter++;
            }
            if (counter == p.size()) {
                cout << "Yes";
                break;
            }
        }
        if (counter == p.size()) {
            break;
        }
        else {
            counter = 0;
            k = -1;
        }
    }
    if (counter != p.size()) {
        cout << "No";
    }
    return 0;
}
//https://quera.ir/college/2572/chapter/7140/lesson/24314/#page=1