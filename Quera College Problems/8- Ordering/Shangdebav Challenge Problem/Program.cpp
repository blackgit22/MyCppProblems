#include <iostream>
using namespace std;
void insertion_sort(int a[], int x);

int main()
{
    int q, num, counter = 0;
    string str;
    cin >> q;
    int num_array[q];
    for (int i = 0; i < q; i++)
    {
        cin >> str >> num;
        if (str == "Add")
        {
            num_array[counter] = num;
            counter++;
            insertion_sort(num_array, counter);
        }
        else if (str == "Ask")
        {
            cout << num_array[num - 1] << "\n";
        }
    }
}

void insertion_sort(int a[], int x)
{
    for (int i = 0; i < x - 1; i++)
    {
        int nam = i + 1;
        for (int j = i; j >= 0; j--)
        {
            if (a[nam] < a[j])
            {
                swap(a[nam], a[j]);
                nam = j;
            }
        }
    }
}
//https: //quera.ir/college/2572/chapter/7175/lesson/25235/?comments_page=1&comments_filter=ALL