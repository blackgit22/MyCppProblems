#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
	int x1, y1, x2, y2, x3, y3,delta_y,y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	if (x1 == x2 && max(y1,y2) == y3){
		delta_y = abs(y2-y1);
		y4 = y3-delta_y;
		cout << x3 << " " << y4;
		exit(0);
	}
	if (x1 == x2 && min(y1, y2) == y3) {
		delta_y = abs(y2 - y1);
		y4 = y3 + delta_y;
		cout << x3 << " " << y4;
		exit(0);
	}
	if (x1 == x3 && max(y1,y3)==y2) {
		delta_y = abs(y3 - y1);
		y4 = y2-delta_y;
		cout << x2 << " " << y4;
		exit(0);
	}
	else if (x1 == x3 && min(y1,y3) == y2) {
		delta_y = abs(y3 - y1);
		y4 = y2 + delta_y;
		cout << x2 << " " << y4;
		exit(0);
	}
	if (x2 == x3 && max(y2,y3) == y1) {
		delta_y = abs(y2 - y3);
		y4 = y1 - delta_y;
		cout << x1 << " " << y4;
		exit(0);
	}
	else if (x2 == x3 && min(y2,y3) == y1) {
		delta_y = abs(y2 - y3);
		y4 = y1 + delta_y;
		cout << x1;
		cout<< " " << y4;
		exit(0);
	}
}
//https://quera.ir/college/2572/chapter/7088/lesson/24127/#page=1
