class Solution {
    public int rangeBitwiseAnd(int left, int right) {
        for(int i=0;i<(Math.log(right)/Math.log(2.0))+1;i++) {
        if(left>=right) {
            return right;
        }
        if((right&(1<<i))!=0) {
            right&=~(1<<i);
        }
    }
    return right;
    }
}