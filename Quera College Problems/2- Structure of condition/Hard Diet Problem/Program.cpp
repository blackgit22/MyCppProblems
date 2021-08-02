#include <iostream>
using namespace std;
int main() {
	char x1,x2,x3,x4,x5;
	int red=0, yellow=0;
	cin >> x1>>x2>>x3>>x4>>x5;
	if (x1 == 'R') {
		red++;
	}
	else if (x1 == 'Y') {
		yellow++;
	}
	if (x2 == 'R') {
		red++;
	}
	else if (x2 == 'Y') {
		yellow++;
	}
	if (x3 == 'R') {
		red++;
	}
	else if (x3 == 'Y') {
		yellow++;
	}
	if (x4 == 'R') {
		red++;
	}
	else if (x4 == 'Y') {
		yellow++;
	}
	if (x5 == 'R') {
		red++;
	}
	else if (x5 == 'Y') {
		yellow++;
	}
	if (x1 == 'R' && x2 == 'Y' && x3 == 'Y' && x4 == 'Y' && x5 == 'Y') {
		cout << "nakhor lite";
		exit(0);
	}
	if (red>=3 || red>=2 && yellow >= 2 || red==5 || yellow==5 || red >= 2 && yellow >= 2) {
		cout << "nakhor lite";
	}
	else {
		cout << "rahat baash";
	}

}
//https://quera.ir/college/2572/chapter/7088/lesson/24124/#page=1,filter=ALL