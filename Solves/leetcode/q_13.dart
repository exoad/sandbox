class Solution {
  int romanToInt(String s) {
    Map<String,int> d=<String,int>{'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000};
    int l=d[s[s.length-1]]!;
    for(int i=0;i<s.length-1;i++)
        l+=((d[s[i]]!<d[s[i+1]]!?-1:1)*d[s[i]]!).toInt();
    return l;
  }
}