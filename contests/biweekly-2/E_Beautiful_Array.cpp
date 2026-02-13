#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int count = 1;
  int elem = a[0];

  for (int i = 1; i < n; i++)
  {
    if (a[i] == elem)
    {
      count++;
    }
  }
  if (count == n)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }

  return 0;
}