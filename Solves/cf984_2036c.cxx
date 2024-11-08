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
STATIC I32 MAX=2e5+10;
U8 s[MAX];
I32 n;
inline BOOL check(I32 idx)
{
    return idx<0||idx>=n-3?false:s[idx]=='1'&&s[idx+1]=='1'&&s[idx+2]=='0'&&s[idx+3]=='0';
}
I32 main()
{
    setIO();
    I32 t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=strlen(s);
        I32 q;
        cin>>q;
        I32 f=0;
        for(I32 i=0;i<n;i++)
            f+=check(i);
        while(q--)
        {
            I32 i,v;
            cin>>i>>v;
            i--;
            if(s[i]!='0'+v)
            {
                BOOL ax=check(i-3)||check(i-2)||check(i-1)||check(i);
                s[i]='0'+v;
                BOOL bx=check(i-3)||check(i-2)||check(i-1)||check(i);
                f+=bx-ax;
            }
            cout<<(f?"YES":"NO")<<endl; 
        }
    }
    YIELD(0);
}
