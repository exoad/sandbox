#include<bits/stdc++.h>
using namespace std;

using i64 = long long;
using u64 = unsigned long long;

struct debug {
    ~debug(){cerr << endl;}
    template<class c> debug& operator<<(c x) {cerr << x; return *this;}
    template<class c, class d>
    debug& operator<<(pair<c, d> x) {*this << "(" << x.first << ", " << x.second << ")"; 
        return *this;}
    template<class c> debug& operator<<(vector<c> x) { *this << "[";
        int f = 0; for(auto it : x) { *this << (f?", ":""); *this << it; f = 1;}
        *this << "]"; return *this;}
};

#define dbg(x) "[" << #x << ": " << x << "]  "
#define Wa() cerr << "[LINE: " << __LINE__ << "] -> "; debug() << 
#define FASTIO ios_base::sync_with_stdio(false), cin.tie(NULL)

const int N = 50000;
vector<int> primes;

void gen_prime()
{
    vector<bool> flag(N+5);
    primes.push_back(2);
    for(int i = 3; i <= N; i += 2) {
        if(flag[i] == 0) {
            primes.push_back(i);
            for(i64 j = 1LL*i*i; j <= N; j += 2*i) {
                flag[j] = 1;
            }
        }
    }
}
vector<vector<int>> G(N+5);
vector<bool> dead(N+5);
vector<int> sizes(N+5);
int oneCentroid(int root)
{
    function<void(int, int)> get_size = [&] (int cur, int p) {
        sizes[cur] = 1;
        for(int to : G[cur]) {
            if(to != p && !dead[to]) {
                get_size(to, cur);
                sizes[cur] += sizes[to];
            }
        }
    };
    get_size(root, -1);

    int tot = sizes[root];
    tot /= 2;
    function<int(int, int)> get_centroid = [&] (int cur, int p) {
        for(int to : G[cur]) {
            if(to != p && !dead[to]) {
                if(sizes[to] > tot) {
                    return get_centroid(to, cur);
                }
            }
        }
        return cur;
    };
    return get_centroid(root, -1);
}
i64 ans = 0;
void decompose()
{
    vector<int> cnt(N+5);
    int mx_h = 0;
    function<void(int, int, int, int)> add = [&] (int cur, int p, int h, int val) {
        cnt[h] += val;
        for(int to : G[cur]) {
            if(to != p && !dead[to]) {
                add(to, cur, h+1, val);
            }
        }
    };
    function<void(int, int, int)> calc = [&] (int cur, int p, int h) {
        mx_h = max(mx_h, h);
        for(int pr : primes) {
            if(pr - h >= 0) {
                ans += cnt[pr-h];
            }
        }
        for(int to : G[cur]) {
            if(to != p && !dead[to]) {
                calc(to, cur, h+1);
            }
        }
    };
    function<void(int, int)> dfs = [&] (int cur, int p) {
        int cntrd = oneCentroid(cur);
        dead[cntrd] = true;

        for(int to : G[cntrd]) {
            if(to != p && !dead[to]) {
                dfs(to, cntrd);
            }
        }
        mx_h = 0;
        cnt[0] = 1;
        add(cntrd, -1, 0, 1);
        for(int to : G[cntrd]) {
            if(to != p && !dead[to]) {
                add(to, cntrd, 1, -1);
                calc(to, cntrd, 1);
                add(to, cntrd, 1, 1);
            }
        }
        for(int i = 0; i <= mx_h; i++) cnt[i] = 0;
        dead[cntrd] = false;
    };
    dfs(1, -1);
}
int main()
{
    gen_prime();
    int n;
    scanf("%d", &n);
    for(int i = 1; i < n; i++) {
        int u, v;
        scanf("%d%d", &u, &v);
        G[u].push_back(v);
        G[v].push_back(u);
    }
    decompose();
    printf("%.12lf\n", (1.0*ans)/(1.0*n*n-n));
}
