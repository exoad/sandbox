class Solution {
public:
    int sumBase(int n, int k) {
        int sum=0;
        while(n>0)
        {
            int d=n%k;
            n/=k;
            sum+=d;
        }
        return sum;
    }
};