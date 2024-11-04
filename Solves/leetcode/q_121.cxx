class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b=prices[0];
        int p=0;
        for(int x:prices)
        {
            p=max(p,x-b);
            b=min(b,x);
        }
        return p;
    }
};