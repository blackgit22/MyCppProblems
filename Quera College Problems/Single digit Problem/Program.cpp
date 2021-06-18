#include <iostream>
using namespace std;

int main() {
	long long x, y = 0;
	cin >> x;
	while (x > 0) {
		y = y + (x % 10);
		x = x / 10;
		if (x == 0 && y % 10 != y) {
			x = y;
			y = 0;
		}
	}

	cout << y;
}
//https://quera.ir/college/2572/chapter/7095/lesson/24142/#page=1