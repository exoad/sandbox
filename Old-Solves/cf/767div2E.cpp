#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vvi ve(n, vi(n));
    for(auto &v : ve)
      for(auto &x : v)
        cin >> x;
    int ans = 0;
    for (int k = 0; k < 2 * n; k += 4) {
      int sub = min(k, n - 1), i = k - sub;
      while (i < n && sub >= 0 && sub < n && i >= 0) {
        ans ^= ve[i][sub] ^ ve[i][n - sub - 1];
        i += 2;
        sub -= 2;
      }
    }
    cout << ans << endl;
  }
}
