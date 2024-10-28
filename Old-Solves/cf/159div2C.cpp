#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, x, y;

    cin >> n;

    vector<double> points(n);

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        points[i] = atan2(y, x) * 180.0 / acos(-1);
    }

    sort(points.begin(), points.end());
    double ans = points[n - 1] - points[0];

    for (int i = 1; i < n; i++)
        ans = min(ans, abs(360 - points[i] + points[i - 1]));

    cout << fixed << setprecision(10) << ans;
}
