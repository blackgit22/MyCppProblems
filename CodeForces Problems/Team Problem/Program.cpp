#include <iostream>
using namespace std;
int main() {
	int n, pet, vas, ton, counter = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> pet >> vas >> ton;
		if (pet + vas + ton > 1) {

			counter++;
		}

	}

	cout << counter;

	return 0;
    
	//https://codeforces.com/problemset/problem/231/A
}