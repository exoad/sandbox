#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
#define I64 long long
#define I32 int
#define U64 unsigned long long
#define U0 void
#define STR string
const I64 MAX_N=1.01e6;
I64 dists[MAX_N],max_dists[MAX_N],l1[MAX_N],l2[MAX_N];
vector<I64> ed(MAX_N);
U0 dfs(I64 u,I64 v)
{
    dists[u]=dists[v]+1;
    max_dists[u]=dists[u];
    for(U64 i=0;i<ed[u];i++)
    {
        I64 v=ed[u][i];
    }
}

I32 main()
{
    I64 t;
    cin>>t;
    while(t--) 
    {
        I64 n;
        cin>>n;

    }
}