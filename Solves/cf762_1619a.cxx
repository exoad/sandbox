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
        STR s;
        cin>>s;
        if(s.length()%2!=0)
            cout<<"NO"<<endl;
        else 
            cout<<(s.substr(0,s.length()/2).compare(s.substr(s.length()/2,s.length()))==0?"YES":"NO")<<endl;
    }
}