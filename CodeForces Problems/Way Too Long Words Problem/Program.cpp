#include <iostream>
#include <string>

int main()
{
    std::string s;
    int n;

    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cin >> s;
        if (s.size() > 10)
        {
            std::cout << s[0] << s.size() - 2 << s[s.size() - 1];
        }
        else
        {
            std::cout << s;
        }
        std::cout << "\n";
    }
}
// https://codeforces.com/problemset/problem/71/A