#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x, ch[100], count = 0, checker = 0;
    string str;

    cin >> str;
    x = str.length();
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (ch[j] == str[i])
            {
                checker++;
                break;
            }
        }
        if (checker == 0)
        {
            ch[count] = str[i];
            count++;
        }
        else
        {
            checker = 0;
        }
    }

    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}

// https://codeforces.com/problemset/problem/236/A