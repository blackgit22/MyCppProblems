#include <iostream>
#include <string>
using namespace std;
string separator(string x, int y);

int main()
{
    int n, k, counter = 0, counter2 = 0, counter3 = 0;
    cin >> n >> k;
    string name[n], alpha[n];
    for (int i = 0; i < n; i++)
    {
        cin >> name[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= counter; j++)
        {
            if (separator(name[i], k) == alpha[j])
            {
                counter2++;
            }
        }
        if (counter2 == 0)
        {
            alpha[counter] = separator(name[i], k);
            counter++;
        }
        counter2 = 0;
    }
    for (int i = 0; i < counter; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (separator(name[j], k) == alpha[i])
            {
                counter2++;
            }
        }
        if (counter3 < counter2)
        {
            counter3 = counter2;
        }
        counter2 = 0;
    }
    cout << counter3;
    return 0;
}
string separator(string x, int y)
{
    string a = "";
    for (int i = 0; i < y; i++)
    {
        a += x[i];
    }
    return a;
}
