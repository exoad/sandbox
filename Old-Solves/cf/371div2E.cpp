#include <iostream>
#include <algorithm>

#define F0R(n) for(int i=0;i<n;i++)
#define FOR(x,n) for(int j=x;j<n;j++)
#define lb lower_bound

using namespace std;
using ll = long long;

ll dp[3005][3005];
ll a[3005], cc[3005];
ll phi;

inline void xd(ll &x, ll y)
{
	if(x > y || x == -1) 
		x = y;
}

int main()
{
	int n;
	cin >> n;
	F0R(n) {
		cin >> cc[i];
		cc[i] -= i;
		a[i] = cc[i];
	}
	sort(cc, cc + n);
	phi = unique(cc, cc + n) - cc;
	F0R(n) {
		a[i] = lb(cc, cc + phi, a[i]) - cc;
	}
	F0R(phi) {
		dp[0][i] = (a[0] > i ? cc[a[0]] - cc[i] : cc[i] - cc[a[0]]);	
	}
	FOR(1, n) {
		ll t = -1;
		F0R(phi) {
			ll tt = (a[j] > i ? cc[a[j]] - cc[i]  : cc[i] - cc[a[j]]);
			xd(t, dp[j - 1][i]);
			dp[j][i] = tt + t;	
		}
	}
	ll k = -1;
	F0R(phi) {
		xd(k, dp[n - 1][i]);
	}
	cout << k << '\n';
}
