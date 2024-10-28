#include <bits/stdc++.h>
#define speed ios_base::sync_with_stdio(false);  \
              cin.tie(NULL)                     

using ll = long long;
using namespace std;


void solve() {
  int n;
  int p[5001], s[5001], k, l, dp[5001][5001];
  bool a;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a;
    if (a)
      p[++k] = i;
    else
      s[++l] = i;
  }
  for (int i = 1; i <= k; i++)
    for (int j = 0; j <= l; j++)
      dp[i][j] = 1e9;
  for (int i = 1; i <= k; i++)
    for (int j = i; j <= l; j++)
      dp[i][j] = min(dp[i][j - 1], dp[i - 1][j - 1] + abs(p[i] - s[j]));
  cout << dp[k][l];
}

int main() {
  speed;
  solve();
}
