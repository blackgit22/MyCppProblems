#include <iostream>
using namespace std;
int main() {
	long long int n,/*,factorial,*/x;
	cin>>n;
	x = n - 1;
	while (x>0) {
		n = n * x;
		x = x - 1;
	}
	cout << n;
}