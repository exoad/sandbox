class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int mxa=INT_MIN;
        int mxb=INT_MAX;
        int ix=-1;
        int ixa=-1;
        for(int&tx:nums)
        {
            int px=__builtin_popcount(tx);
            if(ix<0||ix==px)
            {
                mxb=min(mxb,tx);
                mxa=max(mxa,tx);
            }
            else
            {
                if(ixa>mxb)
                    return false;
                ixa=mxa;
                mxa=tx;
                mxb=tx;
            }
            ix=px;

        }
        return ixa>mxb?false:true;
    }
};