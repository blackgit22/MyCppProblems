#include <iostream>
using namespace std;
int main() {

	int m, n, area, domino_num;

	cin >> m >> n;

	area = n * m;

	if (area % 2 != 0) {
		area = area - 1;
	}

	domino_num = area / 2;

	cout << domino_num;

	//https://codeforces.com/contest/50/problem/A
}