class Solution {
  bool judgeCircle(String moves) {
    int x=0,y=0;
    for(String r in moves.split("")){
        if(r=="U") 
            y++;
        else if(r=="D") 
            y--;
        else if(r=="L") 
            x--;
        else if(r=="R") 
            x++;
    }
    return x==0&&y==0;
  }
}