class Solution {
  bool isAcronym(List<String> words, String s) {
    if(s.length!=words.length)
        return false;
    for(int i=0;i<s.length;i++)
        if(s[i]!=words[i][0])
            return false;
    return true;
  }
}