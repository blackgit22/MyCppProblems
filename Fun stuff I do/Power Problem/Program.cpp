#include <iostream>
using namespace std;
int main()
{
	long long int n, k,product,count;
	cout << "n power k \n";
	cout << "n : "; cin >> n;
	cout << "k : "; cin >> k;
	product = n;
	count = 1;
	while (count < k)
	{
		product = product * n;
		count++;
	}
    if(k==0)
	{
		product = 1;
	
	}
	cout << product;
}
