#include <iostream>
using namespace std;
int recursion_relation(int x);

int main()
{
    int n;

    cin >> n;

    cout << recursion_relation(n);
}

int recursion_relation(int x)
{
    if (x == 0)
    {
        return 5;
    }
    else if (x % 2 == 0)
    {
        return recursion_relation(x - 1) - 21;
    }
    else
    {
        return recursion_relation(x - 1) * recursion_relation(x - 1);
    }
}
//https://quera.ir/college/2572/chapter/7178/lesson/34095/