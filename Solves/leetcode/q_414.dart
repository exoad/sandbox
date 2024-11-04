// this is hella unoptimal
import 'dart:collection';
class Solution {
  int thirdMax(List<int> nums) {
    nums.sort();
    LinkedHashSet<int> r=LinkedHashSet.of(nums.reversed);
    if(r.length<3)
        return r.elementAt(0);
    return r.elementAt(2);
  }
}