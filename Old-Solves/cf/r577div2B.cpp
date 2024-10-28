#include <bits/stdc++.h>
#define speed                       \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)

using ll = long long;
using namespace std;

int main() {
  speed;
  ll n = 0, s = 0, a = 0, m = 0;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a;
    s += a;
    m = max(m, a);
  }
  cout << (m * 2 > s || s % 2 ? "NO" : "YES");
}
