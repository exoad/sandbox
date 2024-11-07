class Solution {
public:
    int maxArea(vector<int>& height) {
        int ax=0;
        int lx=0;
        int rx=height.size()-1;
        while(lx<rx)
        {
            ax=max(min(height[lx],height[rx])*(rx-lx),ax);
            height[lx]<height[rx]?lx++:rx--;
        }
        return ax;
    }
};