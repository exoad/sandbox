class Solution {
  int addDigits(int n) {
    return n==0?n:(n-1)%9+1;
  }
}
