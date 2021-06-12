#include <iostream>
using namespace std;
int main() {
	unsigned long long int n, m, a, y, x=0, h;
	cin >> n >> m >> a;
	if (n < a) { n = a; }
	else {
		if (n % a == 0) { x = a; }
		if (n % a != 0) { x = n % a; }
		y = a - x;
		n = n + y;
	}
	if (m < a) { m = a; }
	else {
		if (m % a == 0) { x = a; }
		if (m % a != 0) { x = m % a; }
		y = a - x;
		m = m + y;
	}
	h = (m * n) / (a * a);
	cout << h;

	//https://codeforces.com/contest/1/problem/A
}