class Solution {
  int isPrefixOfWord(String sentence, String searchWord) {
    List<String> r=sentence.split(" ");
    for(int i=0;i<r.length;i++)
        if(r[i].startsWith(searchWord))
            return i+1;
    return -1;
  }
}