class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(auto r:operations)
            r.find("--")!=string::npos?x--:x++;
        return x;
    }
};