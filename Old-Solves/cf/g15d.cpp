#include <bits/stdc++.h>

#define F0R(x, a, t) for (int t = x; t < a; t++)

using ll = long long;
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        F0R(0, n, i) {cin >> a[i];}
        bool d = true;
        F0R(1, int(pow(3, n)), i) {
            int x = 0, k = i;
            F0R(0, n, j) {
                int mod = k % 3;
                if (mod == 2) mod = -1;
                k /= 3;
                x += mod * a[j];
            }
            if (x == 0) {
                cout << "YES" << endl;
                d = false;
                break;
            }
        }
        if(d)
            cout << "NO" << endl;
    }
}
