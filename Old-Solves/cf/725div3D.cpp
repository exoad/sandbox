#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>

typedef long long ll;

using namespace std;

int pf(int x) {
    int p = 0;
    for (int i = 2; i * i <= x; i++) {
        while (x % i == 0) {
            p++; 
            x /= i;
        }
    }
    if (x > 1)
        p++;
    return p;
}
ll t;
int main() {
    ll a, b, k;
    cin >> t;
    while (t--) {
        cin >> a >> b >> k;
        ll m, _m;
        if (a > b)
            swap(a, b);
        _m = b % a == 0 && a != b ? 1 : 2;
        m = pf(a) + pf(b);
        cout << ((_m <= k && k <= m) ? "YES" : "NO") << endl;
    }
}
