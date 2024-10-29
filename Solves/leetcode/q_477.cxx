class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int t=0;
        for(int i=0;i<31;i++)
        {
            int z=0,o=0;
            for(int&r:nums)
                (r>>i)&1?o++:z++;
            t+=z*o;
        }
        return t;
    }
};
