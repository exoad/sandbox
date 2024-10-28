#include <bits/stdc++.h>
using namespace std;

int main() {
  string a;
  int n;
  bool x = false, y = false;
  cin >> a >> n;

  while (n--) {
    string s;
    cin >> s;
    if (a == s) {
      cout << "YES" << endl;
      return 0;
    }
    if (a[0] == s[1]) x = true;
    if (a[1] == s[0])  y = true;
    if (x == y && y) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
}
