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

  int passing;
  cin >> passing;

  int passcount = 0;
  int failcount = 0;

  for (int i = 0; i < n; i++)
  {
    if (a[i] >= passing)
    {
      passcount++;
    }
    else
    {
      failcount++;
    }
  }
  cout << "Pass: " << passcount;
  cout << "\n";
  cout << "Fail: " << failcount;

  return 0;
}
