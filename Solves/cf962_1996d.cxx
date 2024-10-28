#include <iostream>
#include <string.h>
#include <vector>
#include <cmath>
using namespace std;
#define I64 long long
#define I32 int
#define STR string
I32 main()
{
    I32 t;
    cin>>t;
    while(t--) 
    {
        /*
4
7 4
10 5
7 1000
900000 400000
        */
        I64 n,x,a=0;
        cin>>n>>x;
        for(I64 i=1;i<=min(x,n);i++) 
            for(I64 j=1;n>=j*i&&x>=j+i;j++) 
                a+=min((n-(i*j))/(i+j),x-i-j);
        cout<<a<<endl;
    }
    return 0;
}