// LUOGU_RID: 187502994
//#pragma GCC optimize("Ofast,no-stack-protector")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
//#pragma GCC optimize("Ofast,fast-math")
//#pragma GCC target("avx,avx2")
//#pragma GCC optimize(2)
//#pragma GCC optimize(3)
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
//#define int long long
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef double db;
#define F(i, a, b) for(int i = a; i <= (b); ++i)
#define F2(i, a, b) for(int i = a; i < (b); ++i)
#define dF(i, a, b) for(int i = a; i >= (b); --i)
template<typename T> void debug(string s, T x) {
	cerr << "[" << s << "] = [" << x << "]\n";
}
template<typename T, typename... Args> void debug(string s, T x, Args... args) {
	for (int i = 0, b = 0; i < (int)s.size(); i++) if (s[i] == '(' || s[i] == '{') b++;
		else if (s[i] == ')' || s[i] == '}') b--;
		else if (s[i] == ',' && b == 0) {
			cerr << "[" << s.substr(0, i) << "] = [" << x << "] | ";
			debug(s.substr(s.find_first_not_of(' ', i + 1)), args...);
			break;
		}
}
#ifdef ONLINE_JUDGE
	#define Debug(...)
#else
	#define Debug(...) debug(#__VA_ARGS__, __VA_ARGS__)
#endif
#define pb push_back
#define fi first
#define se second
#define Mry fprintf(stderr, "%.3lf MB\n", (&Med - &Mbe) / 1048576.0)
#define Try cerr << 1e3 * clock() / CLOCKS_PER_SEC << " ms\n";
typedef long long ll;
// namespace Fread {const int SIZE = 1 << 17; char buf[SIZE], *S, *T; inline char getchar() {if (S == T) {T = (S = buf) + fread(buf, 1, SIZE, stdin); if (S == T) return '\n';} return *S++;}}
// namespace Fwrite {const int SIZE = 1 << 17; char buf[SIZE], *S = buf, *T = buf + SIZE; inline void flush() {fwrite(buf, 1, S - buf, stdout), S = buf;} inline void putchar(char c) {*S++ = c;if (S == T) flush();} struct NTR {~NTR() {flush();}} ztr;}
// #ifdef ONLINE_JUDGE
// #define getchar Fread::getchar
// #define putchar Fwrite::putchar
// #endif
inline int ri() {
	int x = 0;
	bool t = 0;
	char c = getchar();
	while (c < '0' || c > '9') t |= c == '-', c = getchar();
	while (c >= '0' && c <= '9') x = (x << 3) + (x << 1) + (c ^ 48), c = getchar();
	return t ? -x : x;
}
inline void wi(int x) {
	if (x < 0) {
		putchar('-'), x = -x;
	}
	if (x > 9) wi(x / 10);
	putchar(x % 10 + 48);
}
inline void wi(int x, char s) {
	wi(x), putchar(s);
}
bool Mbe;
// mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
const int mod = 998244353;
const int inf = 0x3f3f3f3f;
const ll infll = 0x3f3f3f3f3f3f3f3f;
const int _ = 2e5 + 5;

int n, m, k, h[505][505], g[505], c1[505], c2[505], a[505], f[505];

bool Med;
signed main() {
	// Mry;
	n = ri(), m = ri(), k = ri() - 1;
	F(i, 1, m) a[i] = ri();
	h[0][0] = 1;
	F(i, 1, n) {
		F(j, 0, i - 1) if(j <= k) {
			h[i][j] = (h[i][j] + 1ll * h[i - 1][j] * j % mod) % mod;
			h[i][j + 1] = (h[i][j + 1] + 1ll * h[i - 1][j] * (k - j) % mod) % mod;
			if(j == k - 1) g[i] = (g[i] + h[i - 1][j]) % mod;
		}
	}
	F(i, 1, n) c1[i] = h[i - 1][k];
	memset(h, 0, sizeof h);
	F(i, 0, n) h[i][0] = g[i];
	F(i, 1, n) {
		h[i][0] = (h[i][0] + 1ll * (k - 1) * h[i - 1][0] % mod) % mod;
		h[i][1] = (h[i][1] + h[i - 1][0]) %mod;
		h[i][1] = (h[i][1] + 1ll * k * h[i - 1][1] % mod) % mod;
	}
	F(i, 1, n) c2[i] = h[i - 1][1];
	a[m + 1] = a[m], f[0] = 1;
	F(i, 1, m) {
		dF(j, n + 1, 0) {
			f[j] = 0;
			F(o, 1, j) f[j] = (f[j] + 1ll * f[j - o] * (a[i] == a[i + 1] ? c1[o] : c2[o]) % mod) % mod;
		}
	}
	cout << f[n + 1] << '\n';
	// Try;
	return 0;
}