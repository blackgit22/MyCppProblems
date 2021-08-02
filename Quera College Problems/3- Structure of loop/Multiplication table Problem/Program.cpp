#include <iostream>
using namespace std;
int main() {
	int x,y;
	cin>> x;
	for (int i = 1; i <= x;i++) {
		for (int j = 1; j <=x; j++) {
			y = j * i;
			cout << y << " ";
		}
		cout << endl;
	}
}
//https://quera.ir/college/2572/chapter/7095/lesson/24140/#page=1