#include<iostream>
#include<string>
using namespace std;
int main() {
    int counter = 0;
    string str, sub_str;
    cin >> str >> sub_str;
    for (int i = 0;i < str.size();i++) {
        for (int j = 0;j < sub_str.size();j++) {
            if (str[j + i] == sub_str[j]) {
                counter++;
            }
        }
        if (counter == sub_str.size()) {
            i++;
            cout << i << " ";
            i--;
        }
        counter = 0;
    }



    return 0;
}
//https://quera.ir/college/2572/chapter/7140/lesson/33989/#page=1