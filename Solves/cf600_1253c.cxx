#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;
#define I64 long long
#define I32 int
#define STR string
const int MAX=1e6;
int main()
{  
    I64 n,m,sums[MAX],a[MAX],res=0;
    cin>>n>>m;
    for(I64 i;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(I64 i=0;i<n;i++)
    {
        i-m>=0?sums[i]=sums[i-m]+a[i]:sums[i]=a[i];
        res+=sums[i];
        cout<<res<<" ";
    }
    cout<<flush;
}