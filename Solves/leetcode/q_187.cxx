class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.length()<10)
            return {};
        unordered_map<string,int> ix;
        for(int i=0;i<s.length()-9;i++)
            ix[s.substr(i,10)]++;
        vector<string> ax;
        for(const auto&x:ix)
            x.second>1?ax.push_back(x.first):void();
        return ax;
    }
};