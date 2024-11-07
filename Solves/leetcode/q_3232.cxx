class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int ax=0;
        int bx=0;
        for(int&tx:nums)
            tx<10?ax+=tx:bx+=tx;
        return ax!=bx;
    }
};