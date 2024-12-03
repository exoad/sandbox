class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> ix;
        for(int i=0;i<nums.size();i++)
        {
            if(ix.count(nums[i])&&abs(ix[nums[i]]-i)<=k)
                return true;
            ix[nums[i]]=i;
        }
        return false;
    }
};