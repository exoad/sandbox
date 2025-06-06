class Solution {
public:
typedef long long ll;
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN&&divisor==-1) 
        {
            return INT_MAX;
        }
        ll res=0;
        bool neg=(dividend<0)^(divisor<0);
        ll a=abs((ll)dividend);
        ll b=abs((ll)divisor);
        for(int i=31;i>=0;i--) 
        {
            if(b<<i<=a) 
            {
                a-=b<<i;
                res+=1LL<<i; 
            }
        }
        return (int) (neg?-1:1)*res; 
    }

};
