#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int n;
	cin >> n;
	int k = n / 2;
	long long sum = 1ll * k * (k + 1) - (1 - n % 2) * k;
	cout << setprecision(6) << fixed << 1.0 * sum / (n + 1) << '\n';
	return 0;
}
//https://quera.ir/college/2572/chapter/7083/lesson/24120/#page=1,filter=ALL