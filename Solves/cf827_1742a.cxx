#include <iostream>
#include <string.h>
#include <vector>
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
        I32 a,b,c;
        cin>>a>>b>>c;
        cout<<(a+b==c||b+c==a||c+a==b?"YES":"NO")<<endl;
    }
}