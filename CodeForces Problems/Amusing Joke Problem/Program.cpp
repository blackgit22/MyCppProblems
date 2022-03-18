#include <iostream>
#include <string>

int main()
{
    int counter = 0, size;
    std::string name1, name2, fullnames, str;

    std::cin >> name1 >> name2 >> str;

    fullnames = name1 + name2;

    size = fullnames.size();

    if (size != str.size())
    {
        std::cout << "NO";
        exit(0);
    }

    for (int i = 0; i < str.size(); i++)
    {
        for (int j = 0; j < fullnames.size(); j++)
        {
            if (str[i] == fullnames[j])
            {
                fullnames.erase(j, 1);
                counter++;
                break;
            }
        }
    }
    if (counter == size)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
}

// https://codeforces.com/problemset/problem/141/A