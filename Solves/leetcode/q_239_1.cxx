// slow general solution
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int> ix;
        vector<int> ax;
        for(int i=0;i<k;i++)
            ix.insert(nums[i]);
        for(int i=k;i<nums.size();i++)
        {
            ax.push_back(*ix.rbegin());
            ix.erase(ix.find(nums[i-k]));
            ix.insert(nums[i]);
        }
        ax.push_back(*ix.rbegin());
        return ax;
    }
};