class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=-1;
        for(int i=0;i<accounts.size();i++)
        {
            int ix=0;
            for(int j=0;j<accounts[0].size();j++)
                ix+=accounts[i][j];
            max=max==-1?ix:ix>max?ix:max;
        }
        return max;
    }
};