#include <iostream>
using namespace std;
int main() {
  char s[3], t[3];
  for (int i = 0; i < 3; i++) {
    cin >> s[i];
  }
  for (int i = 0; i < 3; i++) {
    cin >> t[i];
  }
  uint ans = 0;
  for (int i = 0; i < 3; i++)
    if (s[i] != t[i]) ans++;
  cout << (ans == 2 ? "No" : "Yes");
}
