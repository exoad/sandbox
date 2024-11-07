class Solution {
public:
        int dp[22]={0}; 
    int numTrees(int n) {
        dp[0]=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<i;j++)
                dp[i]+=dp[j]*dp[i-j-1];
        }
        return dp[n];
    }
};