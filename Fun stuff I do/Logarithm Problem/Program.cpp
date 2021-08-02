#include<iostream>
using namespace std;
//really basic logarithm function, I hate it but its ok I guess
int main() {
    int counter = 0;
    float x, y;
    cout << "enter the logarithmic base: ";
    cin >> y;
    cout << "\n" << "enter the number: ";
    cin >> x;
    while (x <= 1) {
        counter++;
        x /= y;
    }
    cout << "Answer: " << counter;
}