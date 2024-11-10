class Solution {
  int titleToNumber(String columnTitle) {
    int ax=0;
    for(int i=0;i<columnTitle.length;i++)
        ax=ax*26+columnTitle[i].codeUnitAt(0)-64;
    return ax;
  }

}