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
    for(int i=0;i<nums.length;i++)
        nums[i]=sx(nums[i]);
    return (nums..sort())[0];
  }
}