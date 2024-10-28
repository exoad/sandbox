#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
#define I64 long long
#define I32 int
#define STR string
#pragma GCC diagnostic ignored 
I32 main()
{
    STR n;
    cin>>n;
    I32 t=0;
    vector<I32> res={};
    for(I64 i=1;i<n.length();i++) {
        if(n[i]==n[i-1]) {
            t++;
        } else if(n[i]!=n[i-1]) {
            res.push_back(t);
            t=0;
        }
    }
    if(res.size()==0)
        cout<<n.length();
    else {
        I32 max=res[0];
        for(auto r:res) {
            if(r>max) {
                max=r;
            }
        }
        cout<<max+1;
    }
}