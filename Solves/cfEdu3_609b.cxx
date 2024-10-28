#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
#define I64 long long
#define I32 int
#define D_ARR vector
#define STR string
I32 main()
{
    I64 n,m,r=0;
    cin>>n>>m;
    D_ARR<I64> a(12);
    for(I64 i=1;i<=n;i++) {
        I64 a_i;
        cin>>a_i;
        a[a_i]++;
        r+=i-a[a_i];
    }
    cout<<r;
    return 0;
}