#include <iostream>
using namespace std;
int main() {
	int year,choose;
	cout << "Do you want to check for Solar Hijri year(1) or Gregorian calendar(2): ";
	cin >> choose;
	if (choose == 1) {
		cout << "\n" << "Enter the Year: "; cin >> year;
		if (year % 4 == 3) {
			cout << "this is a leap year!";
		}

		else {
			cout << "this is not a leap year!";
		}
	}
	else if (choose == 2) {
		cout << "\n" << "Enter the Year: "; cin >> year;
		if (year % 4 == 0) {
			cout << "this is a leap year!";
		}

		else {
			cout << "this is not a leap year!";
		}

	}
	else {
		cout << "\n" << "The number of Choice is not valid";
	}
}