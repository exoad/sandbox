class Solution {
public:
    int findComplement(int num) {
        return ~num+(1LL<<(long long)(floor(log2(num))+1));
    }
};