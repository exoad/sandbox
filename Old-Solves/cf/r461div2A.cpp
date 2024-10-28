#include <bits/stdc++.h>

#define SPEED                       \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);

using namespace std;

int main() {
  SPEED
  int x, y;
  cin >> x >> y;
  if (y > x + 1 || y == 0 || y == 1 && x > 0) {
    cout << "NO";
    return 0;
  }
  ((y - 1) - x) % 2 == 0 ? cout << "YES" : cout << "NO";
}
