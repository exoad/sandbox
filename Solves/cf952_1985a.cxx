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
        string a,b;
        cin>>a>>b;
        cout<<b[0]<<a[1]<<a[2]<<" "<<a[0]<<b[1]<<b[2]<<endl;
    }
}