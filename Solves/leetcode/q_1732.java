class Solution {
    public int largestAltitude(int[] gain) {
        int res = 0;
        int psum = 0;
        for(int g : gain) {
            psum += g;
            res = Math.max(res, psum);
        }
        return res;
    }
}
