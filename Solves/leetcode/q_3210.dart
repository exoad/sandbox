class Solution {
  String getEncryptedString(String s, int k) {
    StringBuffer buffer=StringBuffer();
    for(int i=0;i<s.length;i++)
        buffer.write(s[(i+k)%s.length]);
    return buffer.toString();
  }
}