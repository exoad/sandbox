//732A
#include<bits/stdc++.h>

using namespace std;

#define F0R(N) for(int i = 1; i <= N; i++)
#define WHI(N) while(N--)
#define MAXIMA 1e+5

int main(void) {
    ios_base::sync_with_stdio(false);
    int T;
    cin >> T;
    WHI(T) {
        int N;
        cin >> N;
        vector<int> a(N + 1);
        vector<array<int, 2>> cnt(MAXIMA + 1);
        F0R(N) {
            cin >> a[i];
            cnt[a[i]][i % 2]++;
        }
        sort(a.begin(), a.end());
        int f = 0;
        F0R(N) {
            cnt[a[i]][i % 2]--;
        }
        F0R(N) {
            f |= cnt[a[i]][0] != 0;
            f |= cnt[a[i]][1] != 0;
        }
        cout << (f ? "NO" : "YES") << endl;
    }
    return 0;
}
