// NOT MINE
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=1;i<=n;i++)
#define pb push_back
#define mp make_pair
#define data dataa
using LL=long long;
using ULL=unsigned long long;
using LD=long double;
const int MOD=998244353;
const int N=510;
int C[N][N],f[N][N],dp[N][N],n,m;
int main()
{
    scanf("%d%d",&n,&m);
    C[0][0]=1;
    rep(i,n)
    {
        C[i][0]=C[i-1][0];
        rep(j,i)C[i][j]=(C[i-1][j]+C[i-1][j-1])%MOD;
    }
    rep(i,m)
    {
        int l,r,x;scanf("%d%d%d",&l,&r,&x);
        f[r][x]=max(f[r][x],l);
    }
    rep(i,n)rep(j,n)f[i][j]=max(f[i][j],f[i-1][j]);
    rep(i,n+1)dp[i][i-1]=1;
    rep(i,n)rep(l,n-i+1)
    {
        int r=l+i-1;
        for(int j=l;j<=r;j++)if(f[r][j]<l)dp[l][r]=(dp[l][r]+LL(dp[l][j-1])*dp[j+1][r]%MOD*C[r-l][j-l])%MOD;
    }
    printf("%d\n",dp[1][n]);
    return 0;
}