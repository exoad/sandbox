#include <bits/stdc++.h>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<string.h>
using namespace std;
#define pb push_back
#define all(v) v. begin(),v. end()
#define  rep(i,n,v) for(i=n;i<v;i++)
#define per(i,n,v) for(i=n;i>v;i--)
#define ll long long
#define endl '\n'
void solve()
{
  ll n, a, b, c, i, j,l=1e9+7;
  string s, r, y;
  ll n1,n2,n3,n4,n5;
  cin>>n;
  a=n;
  ll ar[n];
  rep(i,0,n)
  {
    cin>>n1>>n2>>n3>>n4>>ar[i];
  }
  j=1;
  rep(i,0,n)
  {
    cin>>s;
    if(s == "REVERSE")
    {
      cout<<"3 "<<j++<<endl;
      fflush(stdout);
    }
    else
    {
      ar[2]++;
      cout<<"3 "<<(ar[2]%4)<<" "<<j++<<endl;
      fflush(stdout);
    }
  }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
      solve();
    }
    return 0;
}
