#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (num[j] < num[j + 1])
            {
                num[j] = num[j] ^ num[j + 1];
                num[j + 1] = num[j] ^ num[j + 1];
                num[j] = num[j] ^ num[j + 1];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }
}
//https://quera.ir/college/2572/chapter/7175/lesson/34048/?comments_page=1&comments_filter=ALL&submissions_page=1