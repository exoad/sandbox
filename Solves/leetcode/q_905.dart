# VERY SLOW LOL, but it works lol (bottom %)
class Solution {
  List<int> sortArrayByParity(List<int> nums) {
    nums.sort();
    return <int>[...(nums.where((x)=>x%2==0)),...(nums.where((x)=>x%2!=0))];
  }
}