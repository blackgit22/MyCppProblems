#include<iostream>
#include<string>
using namespace std;
int main() {
    int n, counter = 0, x = 0, max = 0;
    string name;
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> name;
        for (int j = 0;j < name.size();j++) {
            for (int f = 0;f < name.size() - (name.size() - j);f++) {
                if (name[f] == name[j]) {
                    counter++;
                }
            }
            if (counter == 0) {
                x++;
            }
            counter = 0;
        }
        if (x > max) {
            max = x;
        }
        x = 0;
    }
    cout << max;

    return 0;
}