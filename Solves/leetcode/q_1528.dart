class Solution {
  String restoreString(String s, List<int> indices) {
    List<String> r=List.filled(s.length,"?");
    int t=0;
    for(int i in indices){
        r[i]=s[t];
        t++;
    }
    return r.join();
  }
}