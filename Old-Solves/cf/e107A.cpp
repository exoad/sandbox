#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
  ios::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];
    int up = 0;
    for (int i = 0; i < n; i++)
    {
      if (a[i] == 1 || a[i] == 3)
        up++;
    }
    cout << up << "\n";
  }
  return 0;
}
