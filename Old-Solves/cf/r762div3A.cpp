#include <bits/stdc++.h>

#define SPEED                       \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;

using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    if (s.substr(0, (s.size()) / 2) == s.substr((s.size()) / 2)) YES else NO
  }
}
