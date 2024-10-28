#include <bits/stdc++.h>

#define sq(x) (int)sqrt(x)
#define cb(x) (int)cbrt(x)
#define SPEED                       \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);

using ll = long long;
using namespace std;

int main() {
  SPEED
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    cout << sq(n) + cb(n) - sq(cb(n)) << endl;
  }
}
