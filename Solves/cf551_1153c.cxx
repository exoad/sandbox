#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
#define I64 long long
#define I32 int
#define STR string
#define F0R(b) for(I32 i=0;i<b;i++)
I32 main()
{
    I64 l,o=0,c=0;
    cin>>l;
    STR s;
    cin>>s;
    F0R(l) 
        if(s[i]=='(') 
            o++;
    F0R(l) 
    {
        if(s[i]=='?')
        { 
            if(o<l/2)
            {
                s[i]='(';
                o++;
            }
            else
                s[i]=')';
        }
        s[i]=='('?c++:c--;
        if(i==l-1?c!=0:c==0||c<0)
        {
            cout<<":(";
            return 0;
        }
    }
    cout<<s;
}