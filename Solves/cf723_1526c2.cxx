#include <iostream>
#include <queue>
using namespace std;
#define PQ priority_queue
#define I64 long long
#define I32 int
#define F0R(b) for(I64 i=0;i<b;i++)
#define STR string
I32 main()
{
    I64 n,h=0;
    PQ<I64,vector<I64>,greater<I64>> r;
    cin>>n;
    F0R(n) 
    {
        I64 a;
        cin>>a;
        r.push(a);          // insert & sort
        h+=a;
        while(h<0)          // non-negative - [0,+inf) 
        {
            h-=r.top();     // accesses the top element
            r.pop();        // removes the top element
        }
    }
    cout<<r.size();
}