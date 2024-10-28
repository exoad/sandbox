#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
#define I64 long long
#define I32 int
#define STR string
I32 main()
{
/**/
    I64 t,l=1;
    cin>>t;
    while(t>1) {
        l+=t%2;
        t/=2;
    }
    cout<<l;
}