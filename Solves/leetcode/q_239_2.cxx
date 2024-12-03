// fast intended solution
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> ix;
        vector<int> ax;
        for(int i=0;i<nums.size();i++)
        {
            if(!ix.empty()&&ix.front()==i-k)
                ix.pop_front();
            while(!ix.empty()&&nums[i]>nums[ix.back()])
                ix.pop_back();
            ix.push_back(i);
            if(k-1<=i)
                ax.push_back(nums[ix.front()]);
        }
        return ax;
    }
};