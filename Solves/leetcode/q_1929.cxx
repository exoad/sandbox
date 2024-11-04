class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> t=nums;
        t.insert(t.end(),nums.begin(),nums.end());
        return t;
    }
};