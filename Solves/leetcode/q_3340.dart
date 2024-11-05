class Solution {
  bool isBalanced(String x) {
    int ex=0;
    int ox=0;
    for(int j=0;j<x.length;j++)
    {
        int tx=int.parse(x[j]);
        j%2==0?ex+=tx:ox+=tx;
    }
    return ex==ox;
  }
}