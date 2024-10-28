#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int a, b, c;
	int ans;
	cin >> a >> b >> c;
	ans = b + (100 - a) * c;
	cout << ans * 10 << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}

	return 0;
}
