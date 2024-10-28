#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int a[400010];

int main() {
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 1; i <= n; i++) scanf("%d", a + i), ans ^= a[i];
  if (1 & n) {
    cout << "Win" << endl;
  } else {
    for (int i = 1; i <= n; i++)
      if (a[i] == ans) {
        cout << "Win" << endl;
        return 0;
      }
    cout << "Lose" << endl;
  }
}
