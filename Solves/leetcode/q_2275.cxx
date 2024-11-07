class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int ix[24];
        for(int&tx:candidates)
            for(int i=0;i<24;i++)
                if(tx&(1<<i))
                    ix[i]++;
        int ax=0;
        for(int i=0;i<24;i++)
            ax=max(ax,ix[i]);
        return ax;
    }
};