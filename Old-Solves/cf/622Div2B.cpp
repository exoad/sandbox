/**
 * Original Template from a teammate during a vc
 * Problem solved by me
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pi = pair<ll, ll>;
using vi = vector<ll>;
using vpi = vector<pi>;
using vb = vector<bool>;

void solve()
{
  ll n;
  cin >> n;

  ll x, y;
  cin >> x >> y;

  ll s = x + y;
  ll mx = min(n, s - 1);
  // find first i st i + n = s + 1
  // s + 1 - n = i
  //segundo!

  ll mn = max((ll) 1, s - n + 1);
  cout << min(mn, n) << " " << mx << endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll t;
  cin >> t;
  while (t--)
    solve();

  return 0;
}
