#include <iostream>
using namespace std;
int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x2 > x1) {
        cout << "Right";
    }
    else {
        cout << "Left";
    }
}