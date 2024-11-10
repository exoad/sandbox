class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> g(n,0);
        for(auto&x:trust)
        {
            g[x[0]-1]--;
            g[x[1]-1]++;
        }
        for(int i=0;i<g.size();i++)
            if(g[i]==n-1)
                return i+1;
        return -1;
    }
};
