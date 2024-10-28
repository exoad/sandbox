#include<bits/stdc++.h>

using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector < int > c(N);
  map < int, int > mp;

  int ans = 0;
  for (int i = 0; i < N; i++) {
    cin >> c[i];
    mp[c[i]]++;
    if (i >= K) {
      mp[c[i - K]]--;
      if (mp[c[i - K]] == 0) mp.erase(c[i - K]);
    }
    ans = max(ans, (int) mp.size());
  }
  cout << ans << endl;
  return 0;
}
