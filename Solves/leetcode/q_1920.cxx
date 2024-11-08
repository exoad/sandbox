class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ax(nums.size());
        for(int i=0;i<nums.size();i++)
            ax[i]=nums[nums[i]];
        return ax;
    }
};