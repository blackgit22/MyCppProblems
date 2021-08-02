#include <iostream>
using namespace std;
int main() {
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	if (x1 == x2) {
		cout << "Vertical";
	}
	else if (y1 == y2) {
		cout << "Horizontal";
	}
	else {
		cout << "Try again";
	}
}
//https://quera.ir/college/2572/chapter/7088/lesson/24123/#page=1,filter=ALL