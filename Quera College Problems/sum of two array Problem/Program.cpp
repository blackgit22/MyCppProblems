#include <iostream>
using namespace std;

int main()
{
  int a[100], b[100], c[100], i, x;
  cin >> i;

  for (int j = 0; j < i; j++)
  {
    cin >> x;
    a[j] = x;
  }
  for (int j = 0; j < i; j++)
  {
    cin >> x;
    b[j] = x;
  }
  for (int j = 0; j < i; j++)
  {
    c[j] = a[j] + b[j];
  }
  for (int j = 0; j < i; j++)
  {
    cout << c[j] << " ";
  }
}
//https://quera.ir/college/2572/chapter/7136/lesson/33730/