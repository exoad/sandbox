class Solution {
  int singleNumber(List<int> nums) {
    Map<int,int> tt={};
    for(int i in nums) {
        if(tt.containsKey(i)) {
          tt[i]=tt[i]!+1;
        } else {
          tt[i]=1;
        }
    }
    return tt.keys.toList()[tt.values.toList().indexOf(1)];
  }
}