#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n;
  cin >> n;

  // remove the last element = then by default you will get the second last element
  n /= 10; // last element removed
  cout << n % 10;
}
