#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);  \
    cin.tie(NULL)                                \

using namespace std;
using ll = long long;
int n, U, R, D, L;
bool solve(int i) {
  if (!((i >> 0 & 1) + (i >> 1 & 1) <= U &&
        U <= (i >> 0 & 1) + (i >> 1 & 1) + n - 2) ||
      !((i >> 2 & 1) + (i >> 3 & 1) <= D &&
        D <= (i >> 2 & 1) + (i >> 3 & 1) + n - 2) ||
      !((i >> 0 & 1) + (i >> 2 & 1) <= L &&
        L <= (i >> 0 & 1) + (i >> 2 & 1) + n - 2) ||
      !((i >> 1 & 1) + (i >> 3 & 1) <= R &&
        R <= (i >> 1 & 1) + (i >> 3 & 1) + n - 2))
    return false;
  return true;
}

int main() {
  speed;
  int t;
  cin >> t;
  while (t--) {
    cin >> n >> U >> R >> D >> L;
    bool yes = false;
    for (int i = 0; i < 16; i++) {
      if (solve(i)) {
        yes = true;
        break;
      }
    }
    cout << (yes ? "YES" : "NO") << endl;
  }
}
