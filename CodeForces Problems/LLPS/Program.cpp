#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string reverse(string str);
string decimal_binary(int x, int size);
string LLPS_checker(string str1, string str2);

int main()
{

    int counter = 0;
    string str, LLPS = "";
    cin >> str;
    int size = pow(2, str.length());
    string subsequences[size - 1];

    for (int i = 1; i < size; i++)
    {
        string binary = decimal_binary(i, str.length());
        for (int j = 0; j < binary.length(); j++)
        {
            if (binary[j] == '1')
            {
                subsequences[i - 1] += str[j];
            }
        }
    }
    for (int i = 0; i < size - 1; i++)
    {
        if (subsequences[i] == reverse(subsequences[i]))
        {
            LLPS = LLPS_checker(LLPS, subsequences[i]);
        }
    }
    cout << LLPS;
}

string decimal_binary(int x, int size)
{
    string str = "", zeros = "";
    while (x >= 1)
    {
        if (x % 2 == 0)
        {
            str += "0";
            x /= 2;
        }
        else
        {
            str += "1";
            x /= 2;
        }
    }
    string real_num = reverse(str);
    for (int i = 0; i < size - real_num.length(); i++)
    {
        zeros += "0";
    }
    return zeros + real_num;
}

string reverse(string str)
{
    string f = "";

    for (int i = str.length() - 1; i >= 0; i--)
    {

        f = f + str[i];
    }
    return f;
}

string LLPS_checker(string str1, string str2)
{

    if (str1 == "")
    {
        return str2;
    }
    if (str2 == "")
    {
        return str1;
    }
    for (int i = 0; i < min(str1.length(), str2.length()); i++)
    {

        if ((int)str1[i] != (int)str2[i])
        {
            if ((int)str1[i] > (int)str2[i])
            {
                return str1;
            }
            else
            {
                return str2;
            }
        }
    }

    if (str1.length() >= str2.length())
    {
        return str1;
    }
    else
    {
        return str2;
    }
}

// https://codeforces.com/problemset/problem/202/A