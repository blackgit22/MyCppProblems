#include <iostream>
#include <CMATH>
using namespace std;
int main()
{
	double radical = sqrt(5);
	const double gr = (1+radical)/2;
	float n,result;
	double x1, x2, x3;
	cin >> n;
	x3 = 1 - gr;
	x1 = pow(gr, n);
	x2 = pow(x3, n);
	result =(x1-x2)/radical ;
	cout << result;
}