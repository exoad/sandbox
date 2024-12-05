class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long l=0,ax=0,sum=0;
        unordered_map<int,long long> ix;
        for(int r=0;r<nums.size();r++)
        {
            sum+=nums[r];
            ix[nums[r]]++;
            int le=r-l+1;
            if(le==k)
            {
                if(ix.size()==le)
                    ax=max(ax,sum);
                sum-=nums[l];
                ix[nums[l]]--;
                if(ix[nums[l]]==0)
                    ix.erase(nums[l]);
                l++;
            }
        }
        return ax;
    }
};
