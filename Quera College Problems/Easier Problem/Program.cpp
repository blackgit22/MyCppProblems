#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
int main() {
	double x1, x2, x3, x4, sum, ave, product, Max, Min;
	cin >> x1 >> x2 >> x3 >> x4;
	sum = x1 + x2 + x3 + x4;
	ave = sum / 4;
	product = x1 * x2 * x3 * x4;
	// Functional way to find maximum and minimum value of a set
	 Max = max(x1, max(x2, max(x3, x4)));
	 Min = min(x1, min(x2, min(x3, x4)));
	
	/* The max() and min() algorithm
	Max = x1;
	Max = (x2 + Max + abs(x2 - Max))/2;
	Max = (x3 + Max + abs(x3 - Max))/2;
	Max = (x4 + Max + abs(x4 - Max))/2;

	Min = x1;
	Min = (x2 + Min - abs(x2 - Min)) / 2;
	Min = (x3 + Min - abs(x3 - Min)) / 2;
	Min = (x4 + Min - abs(x4 - Min)) / 2;
	*/
	cout << setprecision(6) << fixed << "Sum : " << sum << "\n";
	cout << setprecision(6) << fixed << "Average : " << ave << "\n";
	cout << setprecision(6) << fixed << "Product : " << product << "\n";
	cout << setprecision(6) << fixed << "Max : " << Max << "\n";
	cout << setprecision(6) << fixed << "Min : " << Min << "\n";
}
//https://quera.ir/college/2572/chapter/7083/lesson/24119/#page=1,filter=ALL