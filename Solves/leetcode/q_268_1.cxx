// uses mex
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        set<int> ix(nums.begin(),nums.end());
        int ax=0;
        while(ix.count(ax))
            ax++;
        return ax;
    }   
};