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
#define FOR(a,b) for(I32 i=a;i<=b;i++)
#define MOD 1e9+1
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
// -------------------------- //
// -- コンテストに参加する前に -- //
// -------------------------- //
I32 a[3003000];
I32 main()
{
    // setIO("test_in");
    I32 t;
    cin>>t;
    while(t--)
    {
        I32 n,bd=MOD,flag=FALSE,m=0;
        cin>>n;
        FOR(1,n)
        {
            cin>>a[i];
            if(bd>a[i]) 
            {
                bd=a[i];
                m=i;
            }
        }
        for(I32 i=m+1;i<=n&&flag==FALSE;i++)
            flag=a[i]<a[i-1]?TRUE:FALSE;
        cout<<(flag==FALSE?m-1:-1)<<endl;        
    }
    return 0;
}