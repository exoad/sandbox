class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long i=1;
        for(int x:nums)
            i*=(x<0?-1:x>0?1:x);
        return i<0?-1:i>0?1:0;
    }
};