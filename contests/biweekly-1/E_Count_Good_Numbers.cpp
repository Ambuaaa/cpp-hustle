#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n;
  cin >> n;

  int count = 0;

  for (int i = 1; i <= n; i++)
  {
    long long m;
    cin >> m;

    if (m == 0)
    {
      count++; // 0 is a multiple of 45
    }
    else if (18 % m == 0 || m % 45 == 0)
    {
      count++;
    }
  }
  cout << count;
}
