#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
#define I64 long long
#define I32 int
#define STR string
I32 main()
{
    I64 n;
    cin>>n;
    if(n==10)
        cout<<"4 6";
    else if(n==8)
        cout<<"4 4";
    else if(n%2==0)
        cout<<"4 "<<(n-4);
    else
        cout<<"9 "<<(n-9);
    return 0;
}