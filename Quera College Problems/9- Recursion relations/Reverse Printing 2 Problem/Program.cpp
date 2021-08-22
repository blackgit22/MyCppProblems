#include <iostream>
using namespace std;
int print(int x);

int main()
{
    int x;
    print(1);
}

int print(int x)
{
    cin >> x;
    if (x == 0)
    {
        return 0;
    }
    print(x);
    cout << x << "\n";
}