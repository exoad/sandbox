#include<bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int x1, y1, x2, y2;
    /*
    (x1, y1) = the first rook
    (x2, y2) = the second rook
    */
    cin >> x1 >> y1 >> x2 >> y2;
    cout << ((x1 == x2 || y1 == y2) ? "YES" : "NO") << endl;
  }
}
