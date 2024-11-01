// Not constant O(1) space complexity
class Solution {
  List<int> findDuplicates(List<int> nums) {
    List<int> a=<int>[];
    Set<int> b=<int>{};
    for(int r in nums){
        if(b.lookup(r)!=null)
            a.add(r);
        b.add(r);
    }
    return a;
  }
}