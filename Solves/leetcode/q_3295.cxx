class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        unordered_set<string> bx;
        for(auto&tx:bannedWords)
            bx.insert(tx);
        int ix=0;
        for(auto&tx:message)
        {
            if(bx.find(tx)!=bx.end())
            {
                ix++;
                if(ix>=2)
                    return true;
            }
        }
        return false;
    }
};