class Solution {
public:
    int numberOfSteps(int num) {
        int ax=0;
        while(num>0)
        {
            !(num&1)?num>>=1:num-=1;
            ax++;
        }
        return ax;
    }
};