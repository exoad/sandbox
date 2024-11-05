class Solution {
  List<int> decompressRLElist(List<int> nums) {
    List<int> a=<int>[];
    for(int i=0;i<nums.length-1;i+=2)
        a.addAll(List<int>.filled(nums[i],nums[i+1]));
    return a;
  }
}