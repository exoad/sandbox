#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, t, i, k, x;
  cin >> t;
  while (t--)
  {
    scanf("%d", &n);
    vector<int> a(n + 1, -1);
    for (i = 0, x = 1000000; i < n; i++)
    {
      scanf("%d", &k);
      if (a[k] >= 0)
        x = min(i - a[k] + 1, x);
      a[k] = i;
    }
    printf("%d\n", (x == 1000000 ? -1 : x));
  }
}
