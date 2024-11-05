class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> t;
        for(int i=0;i<n;i++)
            t.insert(t.end(),{nums[i],nums[n+i]});
        return t;
    }
};