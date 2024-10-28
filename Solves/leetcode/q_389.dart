class Solution {
  String findTheDifference(String s, String t) {
    List<String> sC=s.split("");
    sC.sort();
    List<String> tC=t.split("");
    tC.sort();
    for(int i=0;i<tC.length;i++) {
        if(i>=sC.length) {
            return tC[i];
        }
        if(sC[i]!=tC[i]) {
            return tC[i];
        }
    } 
    return "";
  }
}