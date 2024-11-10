class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<=0)
            {
                nums.erase(nums.begin()+i);
                i--;
            }
        }   
        int ax=nums.size();
        for(int i=0;i<ax;i++)
            if(abs(nums[i])<=ax)
                nums[abs(nums[i])-1]=-abs(nums[abs(nums[i])-1]);
        for(int i=0;i<ax;i++)
            if(nums[i]>0)
                return ++i;
        return ++ax;
    }
};