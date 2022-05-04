#include <iostream>

main()
{
    long long num;
    int lucky_number_counter = 0;

    std::cin >> num;

    while (num > 1)
    {
        if (num % 10 == 7 || num % 10 == 4)
        {
            lucky_number_counter++;
        }

        num /= 10;
    }

    if (lucky_number_counter == 4 || lucky_number_counter == 7)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
}