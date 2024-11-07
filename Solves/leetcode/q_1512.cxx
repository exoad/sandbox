class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ax=0;
        unordered_map<int,int> vx;
        for(int i=0;i<nums.size();i++)
        {
            if(vx[nums[i]]>=1)
                ax+=vx[nums[i]];
            vx[nums[i]]++;
        }
        return ax;
    }
};