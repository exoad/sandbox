// this could prob be improved with better initialization of the cache in the constructor
class Solution {
  static Random r=Random();
  List<int> nums;
  Map<int,List<int>> x;
  Solution(List<int> b):nums=b,x=<int,List<int>>{}{
  }
  
  int pick(int target) {
    if(x.containsKey(target))
        return x[target]![r.nextInt(x[target]!.length)];
    List<int> ix=<int>[];
    for(int i=0;i<nums.length;i++)
        if(nums[i]==target)
            ix.add(i);
    x[target]=ix;
    return ix[r.nextInt(ix.length)];
  }
}

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = Solution(nums);
 * int param1 = obj.pick(target);
 */