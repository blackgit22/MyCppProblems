#include <iostream>
using namespace std;
int main() {
	int x1, x2, x3;
	cin >> x1 >> x2 >> x3;
	if (x1 % 2 == 0 || x2 % 2 == 0 && x3 % 2 == 0) {
		cout << "good";
	}
	else {
		cout << "bad";
	}
}
//https://quera.ir/college/2572/chapter/7088/lesson/33722/#page=1