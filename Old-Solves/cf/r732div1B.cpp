#include<bits/stdc++.h>


using namespace std;
using ll = long long;
const ll MOD = 998244353;
ll arr[100001];

ll pack(ll a, ll n) {
  ll p;
  p = 1;
  while (n > 0) {
    if (n % 2 == 1) p = ((long long)p * a) % MOD;
    a = ((long long)a * a) % MOD;
    n = n / 2;
  }
  return p;
}

ll solve(ll n, ll k) {
  ll a = pack(arr[n], MOD - 2);
  ll b = arr[k];
  ll c = arr[n - k];
  return ((long long)pack(((long long)arr[k] * arr[n - k]) % MOD, MOD - 2) *
          arr[n]) %
         MOD;
}

int main() {
  arr[0] = 1;
  arr[1] = 1;
  for (ll i = 2; i <= 100000; i++)
    arr[i] = ((long long)arr[i - 1] * i) % MOD;
  string s;
  ll t, n, i, p, x, l;
  cin >> t;
  while (t--) {
    cin >> n;
    cin >> s;
    p = 0;
    x = 0;
    l = 0;
    for (i = 0; i < s.size(); i++) {
      if (s[i] == '0') {
        l /= 2;
        x += l;
        l = 0;
        p++;
      } else {
        l++;
      }
    }
    x += l / 2;
    cout << solve(x + p, x) << endl;
  }
}
