class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int> ix;
        for(auto&tx:paths)
        {
            ix[tx[0]]++;
            ix[tx[1]]=ix[tx[1]];
        }
        for(auto&[k,v]:ix)
            if(v==0)
                return k;
        return "";
    }
};