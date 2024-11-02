// I feel like this isnt intended solve
class Solution {
  bool isMonotonic(List<int> nums) {
    if(nums.length<2)
        return true;
    bool a=false;
    for(int i=1;i<nums.length;i++){
        if(nums[i-1]>=nums[i])
        {
            a=true;
            continue;
        }    
        else
        {
            a=false;
            break;
        }
    }
    if(a)
        return true;
    a=false;
    for(int i=1;i<nums.length;i++){
        if(nums[i-1]<=nums[i])
        {
            a=true;
            continue;
        }    
        else
        {
            a=false;
            break;
        }
    }
    return a;
  }
}