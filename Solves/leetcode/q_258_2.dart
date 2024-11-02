class Solution {
  int addDigits(int n) {
    if(n<10)
        return n;
    int d=0;
    while(n>0){
        d+=n%10;
        n~/=10;
    }
    return addDigits(d);
  }
}
