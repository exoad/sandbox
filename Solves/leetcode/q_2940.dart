class Solution {
  bool isCircularSentence(String sentence) {
    for(int i=0;i<sentence.length;i++)
        if(sentence[i]==" "&&sentence[i-1]!=sentence[i+1])
            return false;
    return sentence[0]==sentence[sentence.length-1];
  }
}
