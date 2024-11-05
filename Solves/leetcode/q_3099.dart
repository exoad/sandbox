class Solution {
  int sumOfTheDigitsOfHarshadNumber(int x) {
    int ax=0;
    int tx=x;
    while(tx>0){
        ax+=tx%10;
        tx~/=10;
    }
    return x%ax==0?ax:-1;
  }
}