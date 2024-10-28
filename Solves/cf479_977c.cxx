#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;
#define I64 long long
#define I32 int
#define STR string
I32 main()
{
    I32 n,k;
    cin>>n>>k;
    I32 a[n];
    a[0]=1;
    for(I32 i=1;i<=n;i++) 
        cin>>a[i];
    sort(a,a+n+1);
    cout<<(a[k]!=a[k+1]?a[k]:-1);
}