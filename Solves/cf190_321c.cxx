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
#define I64 long long
#define I32 int
#define MAP_I64_I64 map<I64,I64>
#define BOOL bool
#define TRUE 1
#define FALSE 0
#define YIELD(n) return n;
#define U8 char
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
STATIC I32 MAX_N=1e5+15;
I32 n,no[MAX_N];
U8 res[MAX_N];
vector<I32> graph[MAX_N],c(MAX_N);
#define RANGE(a,b) for(I32 i=a;i<=b;i++)
U0 dfs(I32 u,I32 parent)
{
	c[u]=TRUE;
	RANGE(0,graph[u].size()-1)
	{
		if(no[graph[u][i]]==FALSE&&u!=parent)
		{
			dfs(graph[u][i],u);
			c[u]+=c[graph[u][i]];
		}
	}
}
I32 center(I32 v,I32 root,I32 parent)
{
	RANGE(0,graph[v].size()-1)
		if(no[graph[v][i]]==FALSE&&parent!=graph[v][i]&&c[graph[v][i]]*2>c[root])
			YIELD(center(graph[v][i],root,v));
	YIELD(v);
}
U0 re(I32 node=1,U8 curr=(U8)41)
{
    dfs(node,-1);
    I32 center_=center(node,node,-1);
    no[center_]=TRUE;
    res[center_]=curr;
    RANGE(0,graph[center_].size()-1)
        if(no[graph[center_][i]]==FALSE)
            re(node,curr+1);
}
I32 main()
{
/*
4
1 2
1 3
1 4
====
A B B B



10
1 2
2 3
3 4
4 5
5 6
6 7
7 8
8 9
9 10
====
D C B A D C B D C D
*/	
    // setIO();
    cin>>n;
    for(I32 i=0;i<n;i++)
    {
        I32 a,b;
        cin>>a>>b;
        graph[a].pb(a);
        graph[b].pb(b); 
    }
    re();
    RANGE(0,n-1)
		cout<<res[i]<<" ";
    YIELD(0);
}