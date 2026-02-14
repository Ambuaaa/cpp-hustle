#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, x;
  cin >> n >> m >> x;

  int a[n][m];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
  }

  bool flag = false;

  //----

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (a[i][j] == x)
      {
        flag = true;
      }
    }
  }
  cout << ((flag == true) ? "true" : "false");

  return 0;
}
