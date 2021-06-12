#include <iostream>
using namespace std;
int main() {
	float i, ratio, x, result;
	cout << "Do you want to convert g to mole,enter 1 or vice versa, enter 2"<<"\n" << "\n";
	cin >> i;
	cout <<"\n"<<"enter g/mol ratio of matter: ";
	cin >> ratio;
	cout << "\n";
	if (i == 1) {
		cout << "enter g(gram) value: ";
		cin >> x;
		result = x / ratio;
		cout << result;
	}

	else if (i == 2) {
		cout << "enter mole value: ";
		cin >> x;
		result = x * ratio;
		cout << result;
	}
	return 0;
}