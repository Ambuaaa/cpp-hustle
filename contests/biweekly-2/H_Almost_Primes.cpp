#include <bits/stdc++.h>
using namespace std;

void ifPrime(int n)
{
  int count = 0; // for counting divisors

  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      count++;
    }

    if (count > 4)
      break;
  }

  if (count <= 4)
  {
    cout << n << " ";
  }
}

int main()
{
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    ifPrime(i);
  }
}