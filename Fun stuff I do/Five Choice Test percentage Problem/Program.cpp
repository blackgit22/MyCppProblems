#include <iostream>
using namespace std;
int main()
{
	float correct, uncorrect, all;

	cout << "Enter the Number of all question(s): "; cin >> all;
	cout << "\n" << "Enter the Number of correct answer(s): "; cin >> correct;
	if (correct > all) {
		cout << "DONT FUCK WITH ME!" << "\n";
		system("pause");
		return 0;
	}
	else {
		cout << "\n" << "Enter the Number of uncorrect answer(s): "; cin >> uncorrect;
		if (uncorrect>all || (uncorrect+correct)>all) {
			cout << "DONT FUCK WITH ME"<<"\n";
			system("pause");
			return 0;
		}
		else {
			cout << "Your Test Percentage is: " << ((correct - (uncorrect / 4)) / all) * 100 << "\n";
			system("pause");
			return 0;
		}
	}
}