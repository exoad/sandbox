#include <bits/stdc++.h>

#define SPEED                       \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define endl '\n'

using ll = long long;
using namespace std;

int main() {
  SPEED
  int q;
  cin >> q;
  while (q--) {
    ll n, k;
    int x = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
      if (s[i] == '0') {
        if (k >= i - x) {
          swap(s[x], s[i]);
          k = k - (i - x);
          x++;
        } else {
          swap(s[i], s[i - k]);
          k = 0;
        }
      }
    }
    cout << s << endl;
  }
}
