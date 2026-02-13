#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  cin >> n;

  long long a[100000]; // max size given

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int l = (n / 2 - 1);
  int r = (n / 2);

  while (l >= 0 && r < n)
  {
    cout << a[l] << " ";
    cout << a[r] << " ";
    l--;
    r++;
  }

  return 0;
}