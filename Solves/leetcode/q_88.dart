class Solution {
  void merge(List<int> nums1, int m, List<int> nums2, int n) {
    for(int i=m,j=0;i<nums1.length&&j<n;i++,j++)
        nums1[i]=nums2[j];
    nums1.sort();
  }
}