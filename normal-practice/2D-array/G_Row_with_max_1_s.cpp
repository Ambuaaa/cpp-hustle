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

  // row with max 1
  int index = -1; // suppose row 0 has the highest count of 1'
  int maxCount = 0;

  for (int i = 0; i < n; i++)
  {
    int count = 0;
    for (int j = 0; j < m; j++)
    {
      if (a[i][j] == 1)
      {
        count++;
      }
    }
    if (count > maxCount)
    {
      maxCount = count;
      index = i;
    }
  }
  cout << index;

  return 0;
}
