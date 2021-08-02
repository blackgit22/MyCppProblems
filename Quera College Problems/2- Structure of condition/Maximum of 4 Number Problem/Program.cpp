#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int x1, x2, x3, x4, maximum;
	cin >> x1 >> x2 >> x3 >> x4;
	maximum = max(x1, max(x2, max(x3, x4)));
	cout << maximum;
}
//https://quera.ir/college/2572/chapter/7088/lesson/33721/#page=1