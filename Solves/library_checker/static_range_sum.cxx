#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
#define I64 long long
#define I32 int 
#define U0 void
#define YIELD(x) return x;
#define STR string
#define set_io cin.tie(0)->sync_with_stdio(0)
// --------------------------------- //
// 問題 ~ コンテストに参加する前に ~ 問題 //
// --------------------------------- //
#define RANGE(n) for(I32 i=1;i<=n;i++)
#include <numeric>
I32 main()
{
    set_io;
    I64 n,q;
    cin>>n>>q;
    vector<I64> a(n+1);
    RANGE(n)
        cin>>a[i];
    partial_sum(a.begin(),a.end(),a.begin());
    RANGE(q)
    {
        I64 l,r;
        cin>>l>>r;
        cout<<a[r]-a[l]<<endl;
    }
    YIELD(0);
}
