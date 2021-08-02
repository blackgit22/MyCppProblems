#include <iostream>
#include <string>
using namespace std;
int ca(string a, string b);

int main()
{
    int n, k, f = 0;
    string name[2000], alpha[2000];
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> name[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (ca(name[0], name[i]) >= k)
        {
        }
    }
}

int ca(string a, string b)
{
    int counter = 0;
    for (int i = 0; i < a.size() && i < b.size(); i++)
    {
        if (a[i] != b[i])
        {
            break;
        }
        counter++;
    }
    return counter;
}