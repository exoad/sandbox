class Solution {

  int removeElement(List<int> nums, int val) {
    List<int> ix=<int>[];
    List<int> ex=<int>[];
    for(int i=0;i<nums.length;i++)
        nums[i]==val?ix.add(nums[i]):ex.add(nums[i]);
    nums..clear()..addAll(ex)..addAll(ix);
    return ex.length;
  }
}