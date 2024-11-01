// TLE
class Solution {
  List<int> arrayRankTransform(List<int> arr) {
    dynamic r=List<int>.from(arr);
    r.sort();
    r=r.toSet().toList();
    List<int> ans=<int>[];
    for(int t in arr)
        ans.add(r.indexOf(t)+1);
    return ans; 
  }
}