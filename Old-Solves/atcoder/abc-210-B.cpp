#include <bits/stdc++.h>

using namespace std;
int main() {
  int N;
  string S;
  cin >> N >> S;
  for (int n = 0; n < S.size(); n++) {
    if (n % 2 == 0) {
      if (S.at(n) == '1') {
        cout << "Takahashi";
        break;
      }
    } else {
      if (S.at(n) == '1') {
        cout << "Aoki";
        break;
      }
    }
  }
}
