#include <iostream>
#include <string>

int main()
{
    std::string s1, s2;

    std::cin >> s1 >> s2;

    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == s2[i])
        {
            std::cout << 0;
        }
        else
        {
            std::cout << 1;
        }
    }
}
// https://codeforces.com/problemset/problem/61/A