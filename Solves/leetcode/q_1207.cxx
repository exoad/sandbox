class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> ans;
        for(int&r:arr)
            ans[r]++;
        unordered_set<int> f;
        for(auto&r:ans)
        {
            if(f.find(r.second)!=f.end())
                return false;
            f.insert(r.second);
        }
        return true;
    }
};