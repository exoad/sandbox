class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ax=0;
        int bx=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            ax+=nums[i];
            bx+=i;
        }
        return bx-ax;
    }   
};