class Solution {
  int minPartitions(String n) {
    List<int> r=<int>[];
    for(int i=0;i<n.length;i++)
        r.add(int.parse(n[i]));
    return (r..sort()).reversed.toList()[0];
  }
}