#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  ll k;

  cin >> k;

  while (k--)
  {
    ll n;

    cin >> n;

    vector<ll> a(2 * n);
    ll s = 0;
    for (ll i = 0; i < 2 * n; i++)
    {
      cin >> a[i];
      if (a[i] % 2 == 1)
        s++;
    }

    if (s == n)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}
