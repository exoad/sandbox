#include <algorithm>
#include <array>
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <utility>
#include <stack>
#include <bitset>
#include <cmath>
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-result"
#pragma GCC diagnostic ignored "-Wpragmas"
#pragma GCC diagnostic ignored "-Wunused-function"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#pragma GCC diagnostic ignored "-Wunused-but-set-parameter"
#pragma GCC diagnostic ignored "-Wwrite-strings"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wunused-but-set-label"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#pragma GCC diagnostic ignored "-Wmissing-braces"
#pragma GCC diagnostic ignored "-Wmissing-declarations"
using namespace std;
// using namespace __gnu_pbds;
#define I64 long long
#define I32 int
#define MAP_I64_I64 map<I64,I64>
#define BOOL bool
#define TRUE 1
#define FALSE 0
#define sz(x) I32((x).size())
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define sall(x) x.rbegin(), x.rend() 
#define st(x) sort(all(x)) 
#define U0 void
#define MAP map
#define pb push_back
#define STATIC const
#define eb emplace_back
#define it insert
#define STR string
constexpr I32 __b(I32 r)
{
    return 1<<r;
}
constexpr I32 b__(I32 r)
{
    return __b(r)-1;
}
U0 setIO(STR name="") 
{
	cin.tie(0)->sync_with_stdio(0);
	if (sz(name)) 
    {
		freopen((name+".in").c_str(),"r",stdin); 
		freopen((name+".out").c_str(),"w",stdout);
	}
}
// --------------------------------- //
// 問題 ~ コンテストに参加する前に ~ 問題 //
// --------------------------------- //
STATIC I32 MAX_N=2e5+15;
vector<I32> adj[MAX_N];
I64 n,a[MAX_N],p[MAX_N];
U0 dfs2(I64 x,I64 t,I64 v)
{
    if(t!=-1)
        p[x]=v+n-2*a[x];
    for(I64 u:adj[x])
        if(u!=t)
            dfs2(u,x,p[x]);
}
U0 dfs(I64 x,I64 t)
{
    a[x]=1;
    for(I64 u:adj[x])
    {
        if(u!=t)
        {
            dfs(u,x);
            a[x]+=a[u];
            p[x]+=p[u];    
        }
    }
    p[x]+=a[x];
}
I32 main()
{
    setIO();
    cin>>n;
    for(I32 i=0;i<n-1;i++)
    {
        I64 u,v;
        cin>>u>>v;
        adj[v-1].pb(v-1);
        adj[u-1].pb(u-1);
    }
    dfs(0,-1);
    dfs2(0,-1,0);
    I64 mx=0;
    for(I32 i=0;i<n;i++)
        mx=max(mx,p[i]);
    cout<<mx;
    return 0;
}