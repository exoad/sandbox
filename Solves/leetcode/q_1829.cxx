class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int mx=pow(2,maximumBit)-1;
        vector<int> ax(nums.size(),0);
        int ix=0;
        for(int i=0;i<nums.size();i++)
        {
            ix^=nums[i];
            ax[nums.size()-i-1]=ix^mx;
        }
        return ax;
    }
};