class Solution {
  int findSpecialInteger(List<int> arr) {
    int n=arr.length~/4;
    Map<int,int> t=<int,int>{};
    for(int r in arr)
        if(t[r]!=null)
            t[r]=t[r]!+1;
        else
            t[r]=1;
    for(int r in t.keys)
        if(t[r]!>n)
            return r;
    return -1;
  }
}