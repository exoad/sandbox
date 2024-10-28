class Solution {
public:
    bool isPowerOfFour(int n) {
        return n<=0?false:(n&(n-1))==0&&((n-1)%3)==0;
    }
};