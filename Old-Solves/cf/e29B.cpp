#include <iostream>
#include <cstring>
#include <algorithm>
#define maxn 105
using namespace std;
int t;
int a[maxn];
int main() {
    cin >> t;
    for (int i = 0; i < 2 * t; i++) {
        cin >> a[i];
    }
    sort(a, a + 2 * t);
    int b = a[1] - a[0];
    int c = 0;
    int d = 0;
    for (int i = 3; i <= 2 * t; i += 2) {
        c = min(b, a[i - 1] - a[i - 2] + c);
        d = min(c, a[i] - a[i - 1] + d);
        b = a[i] - a[i - 1] + b;
    }
    cout << d;
    return 0;
}
