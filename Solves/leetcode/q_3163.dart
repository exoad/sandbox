class Solution {
  String compressedString(String word) {
    StringBuffer buffer=StringBuffer();
    int c=0;
    for(int i=1;i<=word.length;i++){
        if(i==word.length||word[i]!=word[i-1]||c==8){
            buffer.write(c+1);
            buffer.write(word[i-1]);
            c=0;
        }else c++;
    }
    return buffer.toString();
  }
}
