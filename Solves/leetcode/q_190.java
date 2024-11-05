public class Solution {
    public int reverseBits(int n) {
        int ax=0;
        for(int i=0;i<32;i++)
        {
            ax<<=1;
            ax|=n&1;
            n>>>=1;
        }
        return ax;
    }
}