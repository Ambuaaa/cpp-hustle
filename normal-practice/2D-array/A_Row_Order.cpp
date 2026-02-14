#include <bits/stdc++.h>
using namespace std;

int main()
{
  // input
  long long n, m;
  cin >> n >> m;

  long long a[n][m];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
  }

  // output

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << a[i][j] << " ";
    }
  }
  return 0;
}
