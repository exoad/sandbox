#include<bits/stdc++.h>

using ll = long long;
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    ll x = 1, ans = 0, cby = 1, a, s;
    cin >> a >> s;
    while (s) {
      int low = s % 10, high = a % 10;
      s /= 10;
      a /= 10;
      if (low < high) {
        if (s % 10 == 1) {
          s /= 10;
          low += 10;
        } else
          x = 0;
      }

      ans += cby * (low - high);
      cby *= 10;
    }

    if (a) x = 0;
    if (!x)
      cout << -1 << endl;
    else
      cout << ans << endl;
  }
}
