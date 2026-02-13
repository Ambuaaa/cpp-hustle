#include <bits/stdc++.h>
using namespace std;

void factors(int n)
{
  bool found = false;

  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      {
        if (i % 10 == 2 || i % 10 == 7)
        {
          cout << i << " ";
          found = true;
        }
      }
    }
  }
  if (found == false)
  {
    cout << -1;
  }
}

int main()
{

  long long n;
  cin >> n;

  factors(n);

  return 0;
}