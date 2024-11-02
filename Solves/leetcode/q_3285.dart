class Solution {
  List<int> stableMountains(List<int> height, int threshold) {
    List<int> a=<int>[];
    for(int i=0;i<height.length-1;i++)
        if(height[i]>threshold)
            a.add(i+1);
    return a;
  }
}