class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        std::partial_sum(nums.begin(),nums.end(),nums.begin());
        return nums;
    }
};