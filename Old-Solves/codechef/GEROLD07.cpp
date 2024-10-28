

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <unordered_map>
using namespace std;
int read()
{
  int ret = 0;
  char c = getchar();
  while (c > '9' || c < '0')
    c = getchar();
  while (c >= '0' && c <= '9')
    ret = (ret << 3) + (ret << 1) + (c ^ 48), c = getchar();
  return ret;
}
const int maxn = 2e5 + 5;
int T;
int n, m, q;
struct edge
{
  int from, to;
} e[maxn];
unordered_map<int, int> exi[maxn];
struct lct
{
#define S(u, i) t[u].son[i]
#define F(u) t[u].fa
  struct node
  {
    int son[2], fa, val, mx;
    bool rtag;
  } t[maxn << 1];
  void clear(int u) { S(u, 0) = S(u, 1) = F(u) = t[u].val = t[u].mx = t[u].rtag = 0; }
  bool isroot(int u) { return S(F(u), 0) != u && S(F(u), 1) != u; }
  bool whichson(int u) { return S(F(u), 1) == u; }
  void reverse(int u)
  {
    swap(S(u, 0), S(u, 1));
    t[u].rtag ^= 1;
  }
  void pushdown(int u)
  {
    if (t[u].rtag)
      reverse(S(u, 0)), reverse(S(u, 1)), t[u].rtag = 0;
  }
  void update(int u) { t[u].mx = max(t[u].val, max(t[S(u, 0)].mx, t[S(u, 1)].mx)); }
  void rotate(int u)
  {
    int fa = F(u), gfa = F(fa);
    bool sonnum = whichson(u);
    if (!isroot(fa))
      S(gfa, whichson(fa)) = u;
    F(u) = gfa;
    S(fa, sonnum) = S(u, !sonnum);
    F(S(fa, sonnum)) = fa;
    S(u, !sonnum) = fa;
    F(fa) = u;
    update(fa);
    update(u);
  }
  void pushall(int u)
  {
    if (!isroot(u))
      pushall(F(u));
    pushdown(u);
  }
  void splay(int u)
  {
    pushall(u);
    for (int fa = 0; !isroot(u) && (fa = F(u)); rotate(u))
      if (!isroot(fa))
        rotate(whichson(fa) == whichson(u) ? fa : u);
    update(u);
  }
  void access(int u)
  {
    for (int tmp = 0; u; u = F(tmp = u))
      splay(u), S(u, 1) = tmp, update(u);
  }
  void makeroot(int u)
  {
    access(u);
    splay(u);
    reverse(u);
  }
  void split(int x, int y)
  {
    makeroot(x);
    access(y);
    splay(y);
  }
  void link(int x, int y)
  {
    makeroot(x);
    F(x) = y;
  }
  void cut(int x, int y)
  {
    split(x, y);
    F(x) = S(y, 0) = 0;
  }
  int findnum(int u, int val)
  {
    if (t[u].val == val)
      return u;
    if (t[S(u, 0)].mx == val)
      return findnum(S(u, 0), val);
    if (t[S(u, 1)].mx == val)
      return findnum(S(u, 1), val);
    return 0;
  }
} ltr;
struct dsu
{
  int fa[maxn];
  void prework()
  {
    for (int i = 1; i <= n; i++)
      fa[i] = i;
  }
  int get(int x) { return x == fa[x] ? x : fa[x] = get(fa[x]); }
  bool check(int x, int y) { return get(x) == get(y); }
  void merge(int x, int y) { fa[get(x)] = get(y); }
} S;
struct pre_seg
{
#define L(u) t[u].lson
#define R(u) t[u].rson
  struct node
  {
    int sum;
    int lson, rson;
  } t[maxn * 40];
  int cnt;
  int root[maxn];
  int clone(int u)
  {
    t[++cnt] = t[u];
    return cnt;
  }
  int change(int u, int l, int r, int p, int x)
  {
    u = clone(u);
    t[u].sum += x;
    if (l == r)
      return u;
    int mid = (l + r) >> 1;
    if (p <= mid)
      L(u) = change(L(u), l, mid, p, x);
    else
      R(u) = change(R(u), mid + 1, r, p, x);
    return u;
  }
  int query(int u, int l, int r, int nl, int nr)
  {
    if (l >= nl && r <= nr)
      return t[u].sum;
    int mid = (l + r) >> 1, ret = 0;
    if (mid >= nl)
      ret += query(L(u), l, mid, nl, nr);
    if (mid + 1 <= nr)
      ret += query(R(u), mid + 1, r, nl, nr);
    return ret;
  }
} str;

int main()
{
  T = read();
  while (T--)
  {
    n = read();
    m = read();
    q = read();
    S.prework();
    for (int i = 1; i <= n; i++)
      exi[i].clear();
    for (int i = 0; i <= n + m; i++)
      ltr.clear(i);
    str.cnt = 0;
    for (int i = 1; i <= m; i++)
      e[i].from = read(), e[i].to = read(), ltr.t[i + n].val = ltr.t[i + n].mx = m - i + 1;
    for (int i = 1; i <= m; i++)
    {
      int x = e[i].from, y = e[i].to;
      str.root[i] = str.root[i - 1];
      if (!S.check(x, y))
      {
        ltr.link(x, i + n);
        ltr.link(i + n, y);
        S.merge(x, y);
        exi[x][y] = exi[y][x] = i;
        str.root[i] = str.change(str.root[i], 1, m, i, 1);
      }
      else if (x != y)
      {
        if (exi[x][y])
        {
          ltr.cut(exi[x][y] + n, x);
          ltr.cut(exi[x][y] + n, y);
          ltr.link(x, i + n);
          ltr.link(y, i + n);
          str.root[i] = str.change(str.root[i], 1, m, exi[x][y], -1);
          str.root[i] = str.change(str.root[i], 1, m, i, 1);
          exi[x][y] = exi[y][x] = i;
        }
        else
        {
          ltr.split(x, y);
          int del = ltr.findnum(y, ltr.t[y].mx);
          str.root[i] = str.change(str.root[i], 1, m, del - n, -1);
          ltr.cut(del, e[del - n].from);
          ltr.cut(del, e[del - n].to);
          exi[e[del - n].from][e[del - n].to] = exi[e[del - n].to][e[del - n].from] = 0;
          exi[x][y] = exi[y][x] = i;
          ltr.link(x, i + n);
          ltr.link(y, i + n);
          str.root[i] = str.change(str.root[i], 1, m, i, 1);
        }
      }
    }
    while (q--)
    {
      int l = read(), r = read();
      printf("%d\n", n - str.query(str.root[r], 1, m, l, r));
    }
  }
  return 0;
}
