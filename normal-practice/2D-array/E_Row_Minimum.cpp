#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  int a[n][m];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> a[i][j];
    }
  }
  // ----

  for (int i = 0; i < n; i++)
  {
    int mini = a[i][0]; // the first element of the row
    for (int j = 0; j < m; j++)
    {
      if (a[i][j] < mini)
      {
        mini = a[i][j];
      }
    }
    cout << mini << " ";
  }

  return 0;
}
