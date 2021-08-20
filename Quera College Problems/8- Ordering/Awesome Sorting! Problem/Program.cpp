#include <iostream>
#include <string>

using namespace std;
void scores_bubble_sort(string names[], int scores[], int sports[], int x);
void sports_bubble_sort(string names[], int scores[], int sports[], int x, int k);

int main()
{
    int n, k;
    float score;
    cin >> n;
    int scores[n], sports[n];
    string names[n], sport;

    for (int i = 0; i < n; i++)
    {
        float sum = 0;
        cin >> names[i] >> k;
        for (int j = 0; j < k; j++)
        {
            cin >> score;
            sum += score;
        }
        scores[i] = (int)(sum / k);
        cin >> sports[i];
        for (int j = 0; j < sports[i]; j++)
        {
            cin >> sport;
        }
    }
    scores_bubble_sort(names, scores, sports, n);

    int a = 0;
    for (int i = 1; i < n + 1; i++)
    {

        if (scores[i - 1] != scores[i])
        {
            sports_bubble_sort(names, scores, sports, i, a);
            a = i;
        }
    }
    for (int j = 0; j < n; j++)
    {
        cout << names[j] << "\n";
    }
}

void scores_bubble_sort(string names[], int scores[], int sports[], int x)
{

    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x - i - 1; j++)
        {
            if (scores[j] < scores[j + 1])
            {

                swap(names[j], names[j + 1]);
                swap(scores[j], scores[j + 1]);
                swap(sports[j], sports[j + 1]);
            }
        }
    }
}
void sports_bubble_sort(string names[], int scores[], int sports[], int x, int k)
{

    for (int i = 0; i < x - k; i++)
    {
        for (int j = k; j < x - i - 1; j++)
        {
            if (sports[j] < sports[j + 1])
            {

                swap(names[j], names[j + 1]);
                swap(scores[j], scores[j + 1]);
                swap(sports[j], sports[j + 1]);
            }
        }
    }
}
