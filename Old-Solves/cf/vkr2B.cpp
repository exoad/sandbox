#include <bits/stdc++.h>
#define FOR(n) for (int i = 0; i < n; i++)
#define speed                       \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)                   

using namespace std;
using ll = long double;

int v[100010];

int main() {
  speed;

  int n, u;
  cin >> n >> u;
  FOR(n) cin >> v[i];

  ll ans = -1;
  FOR(n) {
    int x = v[i];
    int dist = upper_bound(v, v + n, x + u) - v;
    dist--;
    if (dist == i || dist == i + 1) continue;
    ll res = v[dist] - v[i + 1], b = v[dist] - v[i];
    ans = max(ans, res / b);
  }

  cout << fixed << showpoint << setprecision(10) << ans << endl;
}
