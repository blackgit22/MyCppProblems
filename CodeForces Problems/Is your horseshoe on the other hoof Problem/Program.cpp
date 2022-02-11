#include <iostream>
using namespace std;
int main()
{
	int s1, s2, s3, s4, count = 0;
	cin >> s1 >> s2 >> s3 >> s4;

	if ((s1 == s2) and (s1 == s3) and (s1 == s4) and (s2 == s3) and (s2 == s4) and (s3 == s4))
	{
		count = 3;
		cout << count;
		exit(0);
	}
	if ((((s1 == s3) and (s2 == s4)) or ((s1 == s4) and (s2 == s3)) or ((s1 == s2) and (s3 == s4))))
	{
		count = 2;
		cout << count;
		exit(0);
	}
	if (((s1 == s3) and (s2 == s4)) or ((s1 == s4) and (s2 == s3)) or ((s1 == s2) and (s3 == s4)))
	{
		count = 2;
		cout << count;
		exit(0);
	}
	if ((s1 == s2) or (s1 == s3) or (s1 == s4) or (s2 == s3) or (s2 == s4) or (s3 == s4))
	{
		count++;
	}
	if (((s1 == s2) and (s1 == s3) and (s2 == s3)) or ((s2 == s3) and (s2 == s4) and (s3 == s4)) or ((s1 == s2) and (s1 == s4) and (s2 == s4)) or ((s1 == s3) and (s1 == s4) and (s3 == s4)))
	{
		count++;
	}
	cout << count;

	// https://codeforces.com/problemset/problem/228/A
}