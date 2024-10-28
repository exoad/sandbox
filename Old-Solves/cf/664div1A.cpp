#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5 + 10;

typedef long long ll;

ll a[maxn], b[maxn];
int cnt = 0, tot = 0;
void rearrange(ll a[], int n)
{
    sort(a + 1, a + n + 1);
    reverse(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
        a[i] += a[i - 1];
}

int main()
{
    int n, d, m;
    scanf("%d%d%d", &n, &d, &m);
    for (int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);
        if (x > m)
            a[++tot] = x;
        else
            b[++cnt] = x;
    }
    ll ans = 0;
    if (tot == 0)
    {
        for (int i = 1; i <= cnt; i++)
            ans += b[i];
        printf("%lld\n", ans);
        return 0;
    }
    rearrange(a, tot);
    rearrange(b, cnt);
    fill(b + cnt + 1, b + n + 1, b[cnt]);
    for (int i = (tot + d) / (1 + d); i <= tot; i++)
        if (1ll * (i - 1) * (d + 1) + 1 <= n)
            ans = max(ans, a[i] + b[n - 1ll * (i - 1) * (d + 1) - 1]);
    printf("%lld\n", ans);
}
