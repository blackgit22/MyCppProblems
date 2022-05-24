#include <iostream>
#include <string>
std::string lowercasing(std::string s);
std::string uppercasing(std::string s);

int main()
{
    int counter = 0;
    std::string s;

    std::cin >> s;

    int size = s.size();

    for (int i = 0; i < size; i++)
    {
        if (s[i] <= 90)
        {
            counter++;
        }
    }

    if (counter > size - counter)
    {
        std::cout << uppercasing(s);
    }
    else
    {
        std::cout << lowercasing(s);
    }
}

std::string lowercasing(std::string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] <= 90)
        {
            s[i] = (int)s[i] + 32;
        }
    }
    return s;
}
std::string uppercasing(std::string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 97)
        {
            s[i] = (int)s[i] - 32;
        }
    }
    return s;
}

// https://codeforces.com/problemset/problem/59/A