class Solution {
  static const List<(int,int)> ix=<(int,int)>[
    (0,1),
    (1,0),
    (0,-1),
    (-1,0)
  ];
  bool isRobotBounded(String instructions) {
    int x=0,y=0,o=0;
    for(int i=0;i<instructions.length;i++)
    {
        if(instructions[i]=="R")
            o=(o+1)%4;
        else if(instructions[i]=="L")
            o=(o+3)%4;
        else
        {
            x+=ix[o].$1;
            y+=ix[o].$2;
        }
    }
    return (x==0&&y==0)||o>0;
  }
}