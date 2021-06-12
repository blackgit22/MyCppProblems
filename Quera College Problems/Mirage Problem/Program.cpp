#include <iostream>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;

	if ((y == x) && (x % 2 == 0)) {
		cout << x * 2;
	}
	else if ((y == x) && (x % 2 == 1)) {
		cout << x * 2 - 1;
	}
	else if ((y == (x - 2)) && (x % 2 == 0)) {
		cout << x + y;
	}
	else if ((y == (x - 2)) && (x % 2 == 1)) {
		cout << x + y - 1;
	}
	else {
		cout << -1;
	}

}
//https://quera.ir/college/2572/chapter/7095/lesson/24144/#page=1