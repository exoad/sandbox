class Solution {
  List<int> findArray(List<int> pref) {
    List<int> a=<int>[pref[0]];
    for(int i=1;i<pref.length;i++)
        a.add(pref[i]^pref[i-1]);
    return a;
  }
}
