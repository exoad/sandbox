// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long ax=0;
        long bx=n;
        while(ax<bx)
        {
            long ix=(ax+bx)/2;
            isBadVersion(ix)?bx=ix:ax=ix+1;
        }
        return (int)ax;
    }
};