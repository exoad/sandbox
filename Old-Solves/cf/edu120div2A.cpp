#include <bits/stdc++.h>
#define endl "\n"
#define elif else if
#define speed                       \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL) 

using namespace std;

int main() {
  speed;
  int t;
  cin >> t;
  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> x;
    x.push_back(a);
    x.push_back(b);
    x.push_back(c);

    sort(x.begin(), x.end());

    if (x[2] == x[0] + x[1])
      cout << "YES" << endl;
    elif (x[0] == x[1] && x[2] % 2 == 0)
      cout << "YES" << endl;
    elif (x[1] == x[2] && x[0] % 2 == 0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}
