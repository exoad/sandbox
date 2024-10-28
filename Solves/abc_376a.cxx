#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
#define I64 long long
#define I32 int
#define STR string
I32 main()
{
    I32 n,c,b,s=1;
    cin>>n>>c;
    cin>>b;
    for(I32 i=1;i<n;i++)
    {
        I32 t;
        cin>>t;
        if(t-b>=c)
        {
            s++;
            b=t;
        }
    }
    cout<<s;
}