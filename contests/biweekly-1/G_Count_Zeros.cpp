#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n;
  cin >> n;

  int count = 0;

  if (n == 0)
  {
    cout << 1;
    return 0;
  }

  while (n > 0)
  {
    if (n % 10 == 0)
    { // extract that element
      count++;
    }
    n = n / 10; // remove that element
  }
  cout << count;
}
