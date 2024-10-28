#include <iostream>
#define speed                       \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL)

using namespace std;
int solve(int n) {
  int arr[10] = {0};
  while (n) {
    int a = n % 10;
    arr[a]++;
    n /= 10;
  }
  for (int i = 0; i < 10; i++)
    if (arr[i] > 1) return 0;
  return 1;
}
int main() {
  speed;
  int l, r;
  cin >> l >> r;
  for (int i = l; i <= r; i++) {
    if (solve(i) == 1) {
      cout << i;
      return 0;
    }
  }
  cout << -1;
}
