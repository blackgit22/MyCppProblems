#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int x;
	cin >> x;
	while (x % 10 == 0) {
		x = x / 10;
	}

	while (x % 10 >= 0 && x>0) {
		cout << x % 10;
		x = x / 10;
	}
		
	return 0;
}
//https://quera.ir/college/2572/chapter/7095/lesson/33952/#page=1