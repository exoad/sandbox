#include <iostream>

using ll = long long;
using namespace std;

int main() 
{
	ll l1, r1, l2, r2, k;
	cin >> l1 >> r1 >> l2 >> r2 >> k;
	cout << (min(r1, r2) < max(l1, l2) ? 0 : (min(r1, r2)-max(l1, l2) + 1 - (k >= max(l1, l2) && k <= min(r1, r2) ? 1 : 0))) << '\n';
}
