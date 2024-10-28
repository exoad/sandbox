#include<bits/stdc++.h>
#define endl "\n"
#define FOR(n) while(n--)

using namespace std;
using ll = long long;

const int M = 1e9+7;

int main() {
    int t;
    cin >> t;
    FOR(t) {
        ll n, k, r = 1;
        cin >> n >> k;
        FOR(k) {
            r = (r * n) % M;
        }
        cout << r << endl;
    }
}
