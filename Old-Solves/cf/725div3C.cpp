#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <array>
#include <algorithm>
#include <utility>
#include <map>
#include <queue>
#include <set>
#include <cmath>
#include <cstdio>
#include <cstring>

#define ll long long
#define ld long double
#define eps 1e-8
#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3f
#define MAXN 1000000

using namespace std;

ll a[200005];
void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    ll res = 0;
    for (int i = 1; i < n; ++i)
    {
        ll x = l - a[i], y = r - a[i];
        ll s = lower_bound(a + i + 1, a + n + 1, x) - a;
        ll z = upper_bound(a + i + 1, a + n + 1, y) - a;
        res += (z - s);
    }
    cout << res << '\n';
}
int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}
