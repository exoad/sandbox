import "dart:math";
class Solution {
  int minElement(List<int> nums) {
    int Function(int tx) sx=(int tx){
        int sxi=0;
        while(tx>0){
            sxi+=tx%10;
            tx~/=10;
        }
        return sxi;
    };
    int ax=0x7FFFFFFF;
    for(int i=0;i<nums.length;i++){
        int tx=sx(nums[i]);
        if(tx<ax)
            ax=tx;
    }
    return ax;
  }
}