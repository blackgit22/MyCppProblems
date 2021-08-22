#include <iostream>
using namespace std;
int recursion(int x);

int main()
{
    int n;

    cin >> n;

    cout << recursion(n);
}

int recursion(int x)
{
    if (x == 3)
    {
        return 7;
    }
    else if (x == 2)
    {
        return 4;
    }
    else if (x == 1)
    {
        return 2;
    }
    else if (x == 0)
    {
        return 1;
    }
    else
    {
        return recursion(x - 3) + recursion(x - 2) + recursion(x - 1);
    }
}
//https://quera.ir/college/2572/chapter/7178/lesson/34096/?comments_page=1&comments_filter=ALL&submissions_page=1