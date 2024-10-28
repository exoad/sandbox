#include<bits/stdc++.h>

using namespace std;
int main() {
  long long n, a, x, y;
  cin >> n >> a >> x >> y;
  if (a >= n) cout << n * x << endl;
  else cout << a * x + (n - a) * y << endl;
}
