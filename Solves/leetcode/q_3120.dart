class Solution {
  int numberOfSpecialChars(String word) {
    Set<String> seen=<String>{};
    int k=0;
    for(int i=0;i<word.length;i++)
        seen.add(word[i]);
    List<String> p=seen.toList();
    for(int i=0;i<p.length;i++)
        if(i!=p.indexOf(p[i].toUpperCase())&&p.contains(p[i].toUpperCase()))
            k++;
    return k;
  }
}