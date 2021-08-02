#include <string>
#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
	while (0 < 1) {
		unsigned long long int n, m, a, y, x, h;
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
		cout << h<<"\n";
	}
}
//https://codeforces.com/contest/1/problem/A