class Solution {
  int numJewelsInStones(String jewels, String stones) {
    int x=0;
    for(int i=0;i<jewels.length;i++)
        for(int j=0;j<stones.length;j++)
            if(jewels[i]==stones[j])
                x++;
    return x;
  }
}