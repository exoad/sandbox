#include <bits/stdc++.h>
#define endl "\n"
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
    int a, b, c;
    cin >> a >> b >> c;
    if ((a + b) == c || (a + c) == b || (b + c) == a) YES else NO
  }
}
