#include <bits/stdc++.h>
using namespace std;

using ll = long long;
void solve() {
    int n;
    cin >> n;
    int res = 0;
    for (ll pw = 1; pw <= n; pw = pw * 10 + 1) {
        for (int d = 1; d <= 9; d++) {
            if (pw * d <= n)
                res++;
        }
    }
    cout << res << endl;
}
int main() {
    int tests;
    cin >> tests;
    while (tests-- > 0)
        solve();
    return 0;
}
