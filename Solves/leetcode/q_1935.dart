class Solution {
  int canBeTypedWords(String text, String brokenLetters) {
    List<String> r=text.split(" ");
    int i=r.length;
    for(String t in r)
        if(t.contains(RegExp(r".*["+brokenLetters+r"]")))
            i--;
    return max(0,i);
  }
}