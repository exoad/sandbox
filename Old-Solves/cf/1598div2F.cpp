//1598F
#include <bits/stdc++.h>

using namespace std;

#define all(v) v.begin(), v.end()
#define F0R(N) for(int i = 0; i < N; i++)
#define long long ll

const int MAX = (1 << 20);
int n, p[21], mn[21], dp[MAX], mp[21][MAX];
string s[21];

int solve(int st, int sum) {
  if (sum < 0) 
    return 0;
  int & ret = dp[st];
  if (ret != -1) 
    return ret;
  ret = 0;
  if (st == (1 << n) - 1) 
    return ret;

  F0R(n) {
    if (st & (1 << i)) 
        continue;
    if (sum + mn[i] >= 0) 
        ret = max(ret, solve(st | (1 << i), sum + p[i]) + mp[i][sum]);
    else 
        ret = max(ret, mp[i][sum]);
  }
  return ret;
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n;
  F0R(n) {
    cin >> s[i];
    F0R(s[i].size()) {
      if (s[i][j] == '(') 
        p[i]++;
      else
        p[i]--;
      if (p[i] <= mn[i]) mp[i][-p[i]]++;
      mn[i] = min(mn[i], p[i]);
    }
  }
  memset(dp, -1, sizeof(dp));
  cout << solve(0, 0);
  return 0;
}
