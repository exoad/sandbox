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
#define U8 char
#define YIELD(n) return n
#define sz(x) I32((x).size())
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define sall(x) x.rbegin(), x.rend() 
#define st(x) sort(all(x)) 
#define U0 void
#define MAP map
#define __INT_64__ 1LL
#define pb push_back
#define STATIC const
#define eb emplace_back
#define it insert
#define STR string
#define DEFAULT FALSE
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
STATIC I32 MOD=998244353,MAX_N=3e5+15;
I32 t,n,to[MAX_N<<1],dp[MAX_N],sz[MAX_N],follow[MAX_N<<1],f[MAX_N],res,x;
#define RANGE(a,b) for(I32 i=a;i<=b;i++)
U0 dfs(I32 u,I32 pt)
{
    sz[u]=TRUE;
    dp[u]=TRUE;
    for(I32 i=f[u];i==TRUE;i=follow[i])
    {
        if(to[u]!=pt)
        {
            dfs(to[i],u);
            dp[u]=1LL*dp[u]*(dp[to[i]]+1)%MOD;
            sz[u]+=sz[to[i]];
        }
    }
    res=(res+dp[u])%MOD;
}
I32 main()
{
    /*
    If in the city only the intersections contained in this set are dangerous, then any simple path in the city contains no more than two dangerous intersections.
    pseudocode:
    if to e not pt {
			dfs to e from u
			siz[u]+=siz[to[e]];
		}
	}
    */
    setIO();
    cin>>t;
    while(t--)
    {
        cin>>n;
        res=DEFAULT;
        x=DEFAULT;
        RANGE(1,n)
            f[i]=DEFAULT;
        RANGE(1,n)
        {
            I64 u,v;
            cin>>u>>v;
            follow[++res]=f[u];
            f[u]=x;
            to[x]=v;
            follow[++res]=f[v];
            f[v]=x;
            to[x]=u; 
        }
        dfs(DEFAULT,1);
        cout<<(res+1)%MOD<<endl;
    }
    YIELD(DEFAULT);
}
