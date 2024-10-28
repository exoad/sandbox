#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
#define I64 long long
#define I32 int
#define STR string
I32 main()
{
    I32 n;
    cin>>n;
    I64 res=0;
    while(n--) 
    {
        STR s;
        cin>>s;
        cout<<s;
        // nlogn
        for(I32 i=0;i<n;i++)
        {
            if(s[i]!='1')
            {
                res*=10+atoi(s[i]+"");  
                break;
            }
        }
    }
    cout<<res;
}