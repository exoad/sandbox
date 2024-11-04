class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> t;
        for(int r:nums)
            t.count(r)?t[r]++:t[r]=1;
        vector<int> r;
        for(const auto&[k,v]:t)
            v!=1?r.push_back(k):void();
        return r;
    }
};