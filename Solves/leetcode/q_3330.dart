class Solution {
  int possibleStringCount(String word) {
    int rx=0;
    int lx=0;
    int ax=0;
    while(lx<word.length&&rx<word.length){
        if(word[lx]==word[rx]){
            ax++;
            rx++;
        }else{
            lx=rx;
            rx++;
        }
    }
    return ax;
  }
}