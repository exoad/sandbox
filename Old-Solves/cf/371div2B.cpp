#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

#define pb push_back
#define it insert

using namespace std;

int main()
{
	int n;
	cin >> n;
	set<int> a1;
	while(n--) {
		int e;
		cin >> e;
		a1.it(e);
	}
	vector<int> a;
	for(int t: a1) {
		a.pb(t);
	}
	cout << (a1.size() <= 2 || (a[2] - a[1] == a[1] - a[0] && a1.size() == 3) ? "YES" : "NO") << '\n';
}
