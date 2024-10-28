#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
#define I64 long long
#define I32 int
#define STR string
#define TRUE 1
#define FALSE 0
#define FOR(a,b) for(int i=a;i<b;i++)
#define MAX 100001
int main()
{
    I64 n,a[MAX],c[MAX],b=0;
    cin>>n;
    FOR(1,n+1) 
    {
        cin>>a[i];
        c[a[i]]=TRUE;
    }
    if(a[1]==1)
        c[0]=TRUE;
    FOR(1,n+1)
    {
        if(a[i]==a[i-1]) 
        {
            while(b<=n+1&&c[b]==TRUE) 
                b++;
            c[i]=TRUE;
            cout<<b<<" ";
        }
        else
            cout<<a[i-1]<<" ";
    }
}