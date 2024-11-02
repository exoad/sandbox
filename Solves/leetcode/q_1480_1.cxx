class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> r(nums.size());
        r[0]=nums[0];
        for(int i=1;i<nums.size();i++)
            r[i]=r[i-1]+nums[i];
        return r;
    }
};